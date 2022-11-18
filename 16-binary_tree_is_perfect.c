#include "binary_trees.h"

/**
 * height - function
 * @tree: node to check
 * Return: 1 for Success
 */

int height(const binary_tree_t *tree)
{
	int r, l;

	if (tree && (tree->right || tree->left))
	{
		l = 1 + height(tree->left);
		r = 1 + height(tree->right);

		return (l == r ? 1 : 0);
	}
	return (0);
}

#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function
 * @tree: node to check
 * Return: 1 for Success
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int p;

	if (tree)
	{
		p = height(tree);
		return (p);
	}
	return (0);
}
