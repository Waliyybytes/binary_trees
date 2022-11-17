#include "binary_trees.h"

/**
 * binary_tree_height - function
 * @tree: node to check
 * Return: 1 for Success
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree && (tree->right || tree->left))
	{
		l = 1 + binary_tree_height(tree->left);
		r = 1 + binary_tree_height(tree->right);

		return (l > r ? l : r);
	}
	return (0);
}

