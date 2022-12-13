#include "binary_trees.h"

/**
 * binary_tree_node - function to create a node in a binary tree.
 *
 * @parent: pointer to the parent of the binary tree to be inserted.
 * @value: the value of the node to be created.
 *
 * Return: pointer to the created node or NULL if failed.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;

	return (new);
}


