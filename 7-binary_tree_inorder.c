#include "binary_trees.h"

/**
 * binary_tree_inorder - function
 * @tree: node to check
 * @func: pointer to function
 * Return: 1 for Success
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
