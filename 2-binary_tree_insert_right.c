#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a new node as a right child of the
 * passed parent node.
 *
 * @parent: pointer to the parent node of the node to be inserted.
 * @value: value of the node to be inserted.
 *
 * Return: pointer to the created node or NULL if failed.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->parent = parent;

	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	} else
	{
		new->right = NULL;
	}

	parent->right = new;

	return (new);
}
