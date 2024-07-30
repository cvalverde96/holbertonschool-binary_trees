#include "binary_trees.h"

/**
 * binary_tree_insert_right - function para insertar nodos a la  derecha
 * @parent: pointer parent
 * @value: valor
 * Return: retorna new
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	if (parent == NULL)
	{
		free(new);
		return (NULL);
	}

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	if (parent->right == NULL)
	{
		parent->right = new;
	}
	else
	{
		parent->right->parent = new;
		new->right = parent->right;
		parent->right = new;
	}

	return (new);
}
