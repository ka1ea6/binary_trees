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
	int is_full = 0;

	if (!tree)
		return (is_full);

	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		is_full--;
	if (tree->left)
	{
		is_full += binary_tree_is_full(tree->left) < 0 ? -1 : 1;
		if (is_full == 0)
			return (0);
	}
	if (tree->right)
		is_full += binary_tree_is_full(tree->right) < 0 ? -1 : 1;

	return (is_full <= 0 ? 0 : 1);
}
