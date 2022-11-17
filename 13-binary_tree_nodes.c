#include "binary_trees.h"

/**
 * binary_tree_nodes - function
 * @tree: node to check
 * Return: integer
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (tree && (tree->left || tree->right))
	{
		return (1 + binary_tree_nodes(tree->left) +
					binary_tree_nodes(tree->right));
	}


	return (0);
}

