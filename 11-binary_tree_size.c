#include "binary_trees.h"

/**
 * binary_tree_size - funcion que imprime tamano de tree
 * @tree: pointer to node
 * Return: size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left = binary_tree_size(tree->left);
		right = binary_tree_size(tree->right);

		return (left + right + 1);
	}
}
