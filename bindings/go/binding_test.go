package tree_sitter_exp_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-exp"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_exp.Language())
	if language == nil {
		t.Errorf("Error loading Exp grammar")
	}
}
