package tree_sitter_minecap_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-minecap"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_minecap.Language())
	if language == nil {
		t.Errorf("Error loading Minecap grammar")
	}
}
