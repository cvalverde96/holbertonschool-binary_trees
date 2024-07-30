#include "binary_trees.h"

/**
 * binary_tree_is_root - funcion que valida si node es root
 * @node: pointer a recibir
 * Return: 1 si es root, 0 if else
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
	{
		return (1);
	}

	if (node == NULL)
	{
		return (0);
	}

	else
	{
		return (0);
	}

}
