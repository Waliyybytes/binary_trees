#include "binary_trees.h"

/**
 * binary_tree_insert_left- function to create binary node
 * @parent: member to node
 * @value: member to node
 * Return: Returns pointer to new node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
		r->right = NULL;
		if (parent->left == NULL)
			r->left =  NULL;
		else
		{
			tmp = parent->left;
			r->left = tmp;
			tmp->parent = r;
		}
		parent->left = r;

	}
	return (r);
}

