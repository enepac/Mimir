import os
import filetype
import tree_sitter
from tree_sitter import Language, Parser
from src.utils.logger import get_logger

logger = get_logger("CodebaseIngestion")

class CodebaseIngestion:
    def __init__(self, root_directory: str):
        self.root_directory = root_directory
        self.parser = Parser()
        # Load your desired language grammar here
        self.language = Language.build_library(
            'build/my-languages.so',
            [
                'tree-sitter-python',  # Add tree-sitter grammars as needed
            ]
        )
        self.parser.set_language(self.language)

    def get_all_files(self):
        """Retrieve all source code files from the directory."""
        source_files = []
        for root, _, files in os.walk(self.root_directory):
            for file in files:
                full_path = os.path.join(root, file)
                if self.is_valid_source_file(full_path):
                    source_files.append(full_path)
        logger.info(f"Found {len(source_files)} valid source files.")
        return source_files

    def is_valid_source_file(self, file_path: str):
        """Check if a file is a valid source code file."""
        kind = filetype.guess(file_path)
        if kind and 'text' in kind.mime:
            return file_path.endswith(('.py', '.js', '.ts'))  # Extendable
        return False

    def parse_file(self, file_path: str):
        """Parse a file into its Abstract Syntax Tree (AST)."""
        try:
            with open(file_path, 'r') as f:
                source_code = f.read()
            tree = self.parser.parse(bytes(source_code, "utf8"))
            logger.info(f"Parsed AST for {file_path}")
            return tree
        except Exception as e:
            logger.error(f"Failed to parse {file_path}: {e}")
            return None

    def index_codebase(self):
        """Index all valid files in the codebase."""
        files = self.get_all_files()
        for file_path in files:
            tree = self.parse_file(file_path)
            # Extend here: Store ASTs or metadata into a database
            logger.info(f"Indexed file: {file_path}")
