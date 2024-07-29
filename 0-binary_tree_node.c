#include "binary_trees.h"

/**
 * binary_tree_node - funcion que crea nodo a traves de malloc
 * @parent: pointer que apunta al parent
 * @value: valor que vamos a guardar
 * Return: new
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));


	if (new == NULL)
	{
		return (NULL);
	}

	else
	{

		new->parent = parent;
		new->n = value;
		new->left = NULL;
		new->right = NULL;

	}

	return (new);
}
