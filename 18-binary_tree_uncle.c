#include "binary_trees.h"

/**
 * binary_tree_uncle - function
 * @node: node to check
 * Return: a node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent && node->parent->parent)
	{
		if ((node->parent->parent)->right == node->parent)
			return ((node->parent->parent)->left);
		return ((node->parent->parent)->right);
	}
	return (NULL);
}
