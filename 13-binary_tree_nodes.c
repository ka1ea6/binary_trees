#include "binary_trees.h"

/**
 * binary_tree_nodes - function to count the nodes with atleast 1 child
 * in a binary tree.
 *
 * @tree: pointer to the root node of the tree to count the number of nodes.
 *
 * Return: number of nodes with atleast 1 child.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (nodes);

	if (tree->left || tree->right)
		nodes++;

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
