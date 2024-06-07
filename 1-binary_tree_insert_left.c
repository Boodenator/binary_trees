#include "binary_trees.h"

/**
 * binary_tree_insert_left - node insertion as left-aux 
 *                           into other in a binary tree.
 * @parent: ptr to node for inserttion of left-aux.
 * @value: The new node stored vlaue.
 *
 * Return: If parent is NULL or error happens - NULL.
 *         Otherwise - new ptr to the new node.
 *
 * Description: If parent present with left-aux, a new node
 *              subistitute it and the old left-aux is set to
 *              the new node left-aux.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
