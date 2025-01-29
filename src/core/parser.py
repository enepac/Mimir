from tree_sitter import Language, Parser
import os

# Define the path to store compiled languages
LANGUAGE_LIB_PATH = "build/my-languages.so"

# Ensure the language library is compiled
if not os.path.exists(LANGUAGE_LIB_PATH):
    raise FileNotFoundError(f"Language library not found: {LANGUAGE_LIB_PATH}")

# Load supported languages
LANGUAGES = {
    "python": Language(LANGUAGE_LIB_PATH, "python"),
    "javascript": Language(LANGUAGE_LIB_PATH, "javascript"),
    "java": Language(LANGUAGE_LIB_PATH, "java"),
    "cpp": Language(LANGUAGE_LIB_PATH, "cpp"),
}


class CodeParser:
    def __init__(self, language: str):
        if language not in LANGUAGES:
            raise ValueError(f"Unsupported language: {language}")

        self.parser = Parser()
        self.parser.set_language(LANGUAGES[language])
        self.language = language

    def parse_code(self, code: str):
        """Parses the source code and returns the root AST node."""
        return self.parser.parse(bytes(code, "utf8")).root_node

    def extract_functions(self, tree):
        """Extract function definitions from the AST."""
        functions = []
        cursor = tree.walk()

        # Manually traverse the tree
        stack = [cursor.node]
        while stack:
            node = stack.pop()
            if node.type == "function_definition":  # Works for Python, JS
                function_name = node.child_by_field_name("name")
                if function_name:
                    functions.append(function_name.text.decode("utf-8"))
            stack.extend(node.children)

        return functions

    def extract_classes(self, tree):
        """Extract class definitions from the AST."""
        classes = []
        cursor = tree.walk()

        # Manually traverse the tree
        stack = [cursor.node]
        while stack:
            node = stack.pop()
            if node.type == "class_definition":  # Works for Python, JS
                class_name = node.child_by_field_name("name")
                if class_name:
                    classes.append(class_name.text.decode("utf-8"))
            stack.extend(node.children)

        return classes

    def extract_imports(self, tree):
        """Extract import statements from the AST."""
        imports = []
        cursor = tree.walk()

        # Manually traverse the tree
        stack = [cursor.node]
        while stack:
            node = stack.pop()
            if node.type in ("import_statement", "import_from_statement"):  # Works for Python
                imports.append(node.text.decode("utf-8"))
            stack.extend(node.children)

        return imports
