#include "binary_trees.h"
/**
 *
 * binary_tree_insert_left - function to insert a binary tree as a left
 * child of the passed parent node.
 *
 * @parent: parent of the node to be inserted.
 * @value: value of the node to be inserted.
 *
 * Return: pointer to the created node or NULL if failed.
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	} else
	{
		new->left = NULL;
	}
	parent->left = new;


	return (new);
}
