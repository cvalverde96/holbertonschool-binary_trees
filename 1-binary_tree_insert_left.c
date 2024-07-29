#include "binary_trees.h"

/**
 * binary_tree_insert_left - function para insertar nodo en
 * child izquierdo
 * @parent: poitner del parent
 * @value: valor en nodo
 * Return: pointer
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		if (parent == NULL)
		{
			return (NULL);
		}

		new->parent = parent;
		new->n = value;
		new->left = NULL;
		new->right = NULL;

		if (parent->left == NULL)
		{
			parent->left = new;
		}

		else
		{
			parent->left->parent = new;
			new->left = parent->left;
			parent->left = new;
		}

	}
	return (new);
}
