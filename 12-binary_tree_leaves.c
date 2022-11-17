#include "binary_trees.h"

/**
 * binary_tree_leaves - function
 * @tree: node to check
 * Return: integer
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{

	if (tree)
	{
		return (1 + (binary_tree_leaves(tree->left) != 0 &&
					binary_tree_leaves(tree->right) != 0));
	}


	return (0);
}

