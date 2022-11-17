#include "binary_trees.h"

/**
 * binary_tree_depth - function
 * @tree: node to check
 * Return: 1 for Success
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	return (0);
}

