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
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
	}


	return (0);
}
