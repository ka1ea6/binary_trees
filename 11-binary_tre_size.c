#include "binary_trees.h"

/**
 * binary_tree_size - function to measure the size of a
 * binary tree
 *
 * @tree: pointer to the tree to be measured.
 *
 * Return: size of the tree or 0 if tree is undefinded.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (size);

	if (tree)
		size++;

	(size += binary_tree_size(tree->left));
	(size += binary_tree_size(tree->right));

	return (size);
}
