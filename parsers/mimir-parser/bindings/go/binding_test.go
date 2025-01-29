package tree_sitter_mimir_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_mimir "github.com/tree-sitter/tree-sitter-mimir/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_mimir.Language())
	if language == nil {
		t.Errorf("Error loading Mimir grammar")
	}
}
