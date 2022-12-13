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
	size_t height = 0;

	if (!tree)
		return (height);

	if (tree->left || tree->right)
		height++;

	return (height += binary_tree_height(tree->left));
	return (height += binary_tree_height(tree->right));
}
