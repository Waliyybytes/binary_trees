#include "binary_trees.h"

/**
 * binary_tree_insert_right- function to create binary node
 * @parent: member to node
 * @value: member to node
 * Return: Returns pointer to new node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *r = NULL;
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);
	r = malloc(sizeof(*r));
	if (r && parent != NULL)
	{
		r->parent = parent;
		r->n = value;
		r->left = NULL;
		if (parent->right == NULL)
			r->right =  NULL;
		else
		{
			tmp = parent->right;
			r->right = tmp;
			tmp->parent = r;
		}
		parent->right = r;

	}
	return (r);
}
