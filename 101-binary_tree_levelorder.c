#include "binary_trees.h"
#include <stdio.h>

void levelorder_curr_level(const binary_tree_t *tree,
		void (*func)(int), int level);
size_t binary_tree_height(const binary_tree_t *tree);

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

/**
 * levelorder_curr_level - function to traverse through a level
 *
 * @tree: pointer to the root node of the level to be traversed.
 * @func: function to call on each node.
 * @level: current level.
 *
 * Return: Nothing.
 */
void levelorder_curr_level(const binary_tree_t *tree,
		void (*func)(int), int level)
{
	if (!tree)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		levelorder_curr_level(tree->left, func, level - 1);
		levelorder_curr_level(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_levelorder - function to traverse a binary tree
 * using level-order traversal
 *
 * @tree: pointer to the root node of the tree to traverse.
 * @func: function to be called for each node accepting the value
 * of the node as an argument.
 *
 * Return: Nothing.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height = 1, i = 0;

	if (!tree || !func)
		return;

	height += binary_tree_height(tree);

	for (i = 1; i <= height; i++)
		levelorder_curr_level(tree, func, i);
}

