import sqlite3
from pathlib import Path

DB_PATH = Path("storage/code_index.sqlite")

class CodeIndexDatabase:
    def __init__(self, db_path: Path = DB_PATH):
        self.db_path = db_path
        self._initialize_database()

    def _initialize_database(self):
        """Creates the SQLite database and FTS5 index if not exists."""
        conn = sqlite3.connect(self.db_path)
        cursor = conn.cursor()

        cursor.execute("""
            CREATE VIRTUAL TABLE IF NOT EXISTS code_index USING fts5(
                file_path,
                language,
                function_name,
                class_name,
                imports,
                docstring,
                comments,
                code_snippet
            )
        """)
        
        conn.commit()
        conn.close()

    def insert_code_metadata(self, file_path, language, function_name, class_name, imports, docstring, comments, code_snippet):
        """Inserts extracted code metadata into the database."""
        conn = sqlite3.connect(self.db_path)
        cursor = conn.cursor()

        cursor.execute("""
            INSERT INTO code_index (
                file_path, language, function_name, class_name, imports, docstring, comments, code_snippet
            ) VALUES (?, ?, ?, ?, ?, ?, ?, ?)
        """, (file_path, language, function_name, class_name, imports, docstring, comments, code_snippet))

        conn.commit()
        conn.close()

    def search_code(self, query):
        """Searches code snippets, comments, or docstrings based on a query."""
        conn = sqlite3.connect(self.db_path)
        cursor = conn.cursor()
        
        cursor.execute("""
            SELECT file_path, function_name, class_name, code_snippet
            FROM code_index WHERE code_index MATCH ?
        """, (query,))
        
        results = cursor.fetchall()
        conn.close()
        return results

    def clear_index(self):
        """Clears all data in the code index (useful for re-indexing)."""
        conn = sqlite3.connect(self.db_path)
        cursor = conn.cursor()
        cursor.execute("DELETE FROM code_index")
        conn.commit()
        conn.close()

# Usage Example
if __name__ == "__main__":
    db = CodeIndexDatabase()
    db.insert_code_metadata(
        file_path="src/example.py",
        language="python",
        function_name="example_function",
        class_name="ExampleClass",
        imports="import os, sys",
        docstring="""This is an example function.""",
        comments="# Example comment",
        code_snippet="def example_function():\n    pass"
    )
    
    print(db.search_code("example_function"))
