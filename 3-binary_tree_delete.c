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
		/**
		 * free(tree->left->left);
		 * free(tree->left->right);
		 * free(tree->right->right);
		 * free(tree->right->left);
		 */

		/**
		 * free(tree->left);
		 * free(tree->right);
		 */
		binary_tree_delete(free->right);
		binary_tree_delete(free->left);

		free(tree);
	}
}
