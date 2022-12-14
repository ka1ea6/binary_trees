#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_is_full - function to check if binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is full 0 if tree is NULL or not full.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_left = 0, full_right = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	full_left = binary_tree_is_full(tree->left);
	full_right = binary_tree_is_full(tree->right);

	return ((full_left == 0 || full_right == 0) ? 0 : 1);
}
