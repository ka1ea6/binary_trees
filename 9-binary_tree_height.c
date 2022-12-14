#include "binary_trees.h"

/**
 * binary_tree_height - functin to measure the height of a
 * binary tree.
 *
 * @tree: tree to be measured.
 *
 * Return: size of the tree or 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	{
		height_left = binary_tree_height(tree->left) + 1;
		height_right = binary_tree_height(tree->right) + 1;
	}

	return ((height_left >= height_right) ? height_left : height_right);
}
