#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function to check if the given node is a leaf
 *
 * @node: node to be checked.
 *
 * Return: 0 if node is not a leaf node, 1 otherwise.
 */


int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);

	return (1);
}
