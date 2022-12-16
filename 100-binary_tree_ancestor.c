#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_depth - function to get the depth of the given node
 * in a binary tree.
 *
 * @node: node to be checked.
 *
 * Return: depth of the given node in a binary tree.
 */

size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth = 0;

	if (!node)
		return (depth);

	if (node->parent)
		depth++;

	return (depth += binary_tree_depth(node->parent));
}
/**
 * binary_trees_ancestor - function to find the lowest common
 * ancestor of two node.
 *
 * @first: pointer to the first node to be checked.
 * @second: pointer to the second node to be checked.
 *
 * Return: pointer to the lowest common ancestor if common ancestor
 * found NULL otherwise.
 */

binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first,
		const binary_tree_t *second
		)
{
	size_t first_depth = 0, second_depth = 0;

	if (!first || !second)
		return (NULL);

	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);

	if (first_depth == second_depth)
	{
		if (first->n == second->n)
			return ((binary_tree_t *) first);
		else
			return (binary_trees_ancestor(first->parent, second->parent));
	}
	else if (first_depth > second_depth)
		return (binary_trees_ancestor(first->parent, second));
	else if (second_depth > first_depth)
		return (binary_trees_ancestor(first, second->parent));

	return (NULL);
}
