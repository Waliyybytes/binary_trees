#include "binary_trees.h"

/**
 * binary_tree_is_leaf- function to create binary node
 * @node: node to check
 * Return: 1 for Success
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (node->left == NULL && node->right == NULL)
			return (1);
	}
	return (0);
}
