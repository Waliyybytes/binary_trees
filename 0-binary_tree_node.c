#include "binary_trees.h"

/**
 * binary_tree_node- function to create binary node
 * @parent: member to node
 * @value: member to node
 * Return: Returns pointer to new node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *r = NULL;

	r = malloc(sizeof(*r));
	if (r)
	{
		r->n = value;
		r->parent = parent;
		r->left = NULL;
		r->right = NULL;
	}
	return (r);
}
