#include "binary_trees.h"

/**
 * binary_tree_is_leaf - funcion que evalue si nodo es leaf
 * @node: pointer que vamos a evaluar
 * Return: 1 si es leaf 0 si no
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
