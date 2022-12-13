#include "binary_trees.h"

/**
 * binary_tree_postorder - function to traverse a binary tree using post
 * order traversal
 *
 * @tree: pointer to the root node to be traversed.
 * @func: pointer to a function to call for each node.
 *
 * Return: nothing.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);

	if (tree)
		func(tree->n);
}
