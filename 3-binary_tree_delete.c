#include "binary_trees.h"

void binary_tree_delete_left(binary_tree_t *tree);
void binary_tree_delete_right(binary_tree_t *tree);


void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	if (tree)
		free(tree);
}
