#include "binary_trees.h"

/**
 * binary_tree_is_full - function
 * @tree: node to check
 * Return: integer
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree)
	{
		if (tree->right == NULL && tree->left == NULL)
			return (1);
		if (tree->right && tree->left)
			return (binary_tree_is_full(tree->left) &&
					binary_tree_is_full(tree->right));
	}


	return (0);
}

