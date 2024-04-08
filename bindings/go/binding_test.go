package tree_sitter_poweron_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-poweron"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_poweron.Language())
	if language == nil {
		t.Errorf("Error loading Poweron grammar")
	}
}
