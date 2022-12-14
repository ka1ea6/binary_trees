#include "binary_trees.h"

/**
 * binary_tree_balance - function to measure the balance factor of
 * a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance
 * factor.
 *
 * Return: balance factor of a binary tree or 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;
	const binary_tree_t *temp;

	if (!tree)
		return (balance);

	temp = malloc(sizeof(binary_tree_t));

	if (!temp)
		return (balance);

	temp = tree;

	while (temp->left)
	{
		balance++;
		temp = temp->left;
	}
	temp = tree;
	while (temp->right)
	{
		balance--;
		temp = temp->right;
	}

	free(temp);

	return (balance);
}
