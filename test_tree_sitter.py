from tree_sitter import Language, Parser

# Create a language library
LANGUAGE = Language('build/my-languages.so', 'python')

parser = Parser()
parser.set_language(LANGUAGE)

tree = parser.parse(b"def foo():\n    return 42")
print(tree.root_node.sexp())
