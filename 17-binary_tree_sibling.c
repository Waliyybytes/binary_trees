#include "binary_trees.h"

/**
 * binary_tree_sibling - function
 * @node: node to check
 * Return: a node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		if ((node->parent)->right == node)
			return ((node->parent)->left);
		return ((node->parent)->right);
	}
	return (NULL);
}
