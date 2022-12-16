#include "binary_trees.h"

/**
 * binary_tree_sibling - function to find the sibling of
 * a node.
 *
 * @node: pointer to the node to find the sibling.
 *
 * Return: NULL if node or parent is null or node has
 * no siblings. Pointer to the node otherwise.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left->n == node->n)
		if (node->parent->right)
			return (node->parent->right);
	else if (node->parent->right->n == node->n)
		if (node->parent->left)
			return (node->parent->left);

	return (NULL);
}
