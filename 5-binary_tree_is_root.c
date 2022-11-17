#include "binary_trees.h"

/**
 * binary_tree_is_root- function to check node
 * @node: node to check
 * Return: 1 for Success
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (node->left != NULL && node->right != NULL)
			return (1);
	}
	return (0);
}
