#include "binary_trees.h"

/**
 * binary_tree_delete - funcion que libera free
 * @tree: pointer to root
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		exit(1);
	}

	else
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
