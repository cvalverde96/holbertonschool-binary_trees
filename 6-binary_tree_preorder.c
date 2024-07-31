#include "binary_trees.h"

/**
 * binary_tree_preorder - function para hacer preorder traversal
 * @tree: pointer a root
 * @func: function pointer
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	int n;

	if (tree == NULL || *func == NULL)
	{
		return;
	}

	n = tree->n;
	(*func)(n);
}
