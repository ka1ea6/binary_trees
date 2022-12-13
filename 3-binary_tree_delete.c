#include "binary_trees.h"

/**
 * binary_tree_delete - function to delete all the nodes of the given tree.
 *
 * @tree: pointer to the tree to be deleted.
 *
 * Return: Nothing.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	if (tree)
		free(tree);
}
