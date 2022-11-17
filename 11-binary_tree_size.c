#include "binary_trees.h"

/**
 * binary_tree_size - function
 * @tree: node to check
 * Return: 1 for Success
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s;

	if (tree)
	{

		s = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);

		return (s);
	}


	return (0);
}

