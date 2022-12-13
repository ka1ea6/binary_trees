#include "binary_trees.h"

/**
 * binary_tree_depth - function to calculate the depth of a node
 * in a binary tree
 *
 * @tree: pointer to the node to measure the depth.
 *
 * Return: depth or 0 if tree is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (depth);

	if (tree->parent)
		depth++;
	return (depth += binary_tree_depth(tree->parent));
}
