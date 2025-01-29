from tree_sitter import Language, Parser

# Path to the shared object file for the Mimir language parser
LIB_PATH = "/workspaces/Mimir/parsers/mimir-parser/build/mimir.so"

# Ensure the parser is built
Language.build_library(
    LIB_PATH,  # Output path for the compiled parser
    ["/workspaces/Mimir/parsers/mimir-parser"]  # Source directory
)

# Load the compiled parser
MIMIR_LANGUAGE = Language(LIB_PATH, "mimir")

# Create a parser instance
parser = Parser()
parser.set_language(MIMIR_LANGUAGE)

# Sample Mimir code snippet
source_code = b"def my_function(): pass"

# Parse the source code
tree = parser.parse(source_code)

# Print the syntax tree
print(tree.root_node.sexp())
