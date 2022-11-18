#include "binary_trees.h"

/**
 * power - function
 * @a: member
 * Return: power of 2 to a
 */

int power(int a)
{
	int i = 0, res = 1;

	while (i < a)
	{
		res *= 2;
		i++;
	}


	return (res);
}



/**
 * height - function
 * @tree: node to check
 * Return: 1 for Success
 */

int height(const binary_tree_t *tree)
{
	int r, l;

	if (!tree)
		return (0);

	if (tree && (tree->left || tree->right))
	{
		l = 1 + height(tree->left);
		r = 1 + height(tree->right);

		return (l > r ? l : r);
	}
	return (0);
}

/**
 * size - function
 * @tree: node to check
 * Return: 1 for Success
 */

int size(const binary_tree_t *tree)
{
	int s;

	if (tree)
	{

		s = 1 + size(tree->left) + size(tree->right);

		return (s);
	}
	return (0);
}
/**
 * binary_tree_is_full - function
 * @tree: node to check
 * Return: integer
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int h, s;

	if (tree)
	{
		h = height(tree);
		s = size(tree);
		if (power(h + 1) - 1 == s)
			return (1);
	}


	return (0);
}

