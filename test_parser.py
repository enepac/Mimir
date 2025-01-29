import sys
import os

# Ensure `src/core/` is in Python's module search path
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), "src/core")))

from parser import CodeParser  # Import from src/core/parser.py

# Sample Python code for testing
sample_code = """
import os
import sys

class ExampleClass:
    def __init__(self):
        pass

    def sample_method(self):
        return "Hello, World!"

def example_function():
    return 42
"""

# Initialize parser
parser = CodeParser("python")  # Change to "javascript", "java", or "cpp" as needed
tree = parser.parse_code(sample_code)

# Run extraction functions
print("📌 Extracted Functions:", parser.extract_functions(tree))
print("📌 Extracted Classes:", parser.extract_classes(tree))
print("📌 Extracted Imports:", parser.extract_imports(tree))
