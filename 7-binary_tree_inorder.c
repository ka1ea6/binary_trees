#include "binary_trees.h"

/**
 * binary_tree_inorder - function to traverse a binary tree using
 * pre-order traversal.
 *
 * @tree: pointer to the tree to be traversed.
 * @func: pointer to a function to call for each node.
 *
 * Return: Nothing.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;


	binary_tree_inorder(tree->left, func);
	if (tree)
		func(tree->n);

	binary_tree_inorder(tree->right, func);
}
