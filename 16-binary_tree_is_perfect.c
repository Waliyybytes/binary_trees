#include "binary_trees.h"
/**
 * height - function
 * @tree: node to check
 * Return: 1 for Success
 */

int height(const binary_tree_t *tree)
{
	int r, l;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	
	
	l = 1 + height(tree->left);
	r = 1 + height(tree->right);

	return (l > r ? l : r);
}

/**
 * balance - function
 * @tree: node to check
 * Return: integer
 */

int balance(const binary_tree_t *tree)
{

	if (tree)
		return (height(tree->left) - height(tree->right));
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

	if (tree == NULL)
		return (0);

	if (balance(tree) == 0)
	{
		if (height(tree->left) == 0 && height(tree->right) == 0)
			return (1);
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}
	return (0);
}
