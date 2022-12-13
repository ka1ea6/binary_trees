#include "binary_trees.h"

/**
 * binary_tree_is_root - function to check if given node is a
 * root node.
 *
 * @node: node to be checked.
 *
 * Return: 1 if node is a root node, 0 otherwise.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
