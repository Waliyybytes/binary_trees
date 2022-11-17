#include "binary_trees.h"

/**
 * binary_tree_h - function
 * @tree: node to check
 * Return: 1 for Success
 */

int binary_tree_h(const binary_tree_t *tree)
{
	int r, l;

	if (!tree)
		return (0);

	if (tree || tree->left || tree->right)
	{
		l = 1 + binary_tree_h(tree->left);
		r = 1 + binary_tree_h(tree->right);

		return (l > r ? l : r);
	}
	return (0);
}

/**
 * binary_tree_balance - function
 * @tree: node to check
 * Return: integer
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree)
	{
		return (binary_tree_h(tree->left) - binary_tree_h(tree->right));
	
	}
	return (0);
}
