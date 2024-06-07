#include "binary_trees.h"

/**
 * binary_tree_insert_right - add new node as the right-aux
 *                            to other in a binary tree.
 * @parent: Ptr to be inserted into right-aux.
 * @value: the new node value stored.
 *
 * Return: If parent is NULL or error - NULL.
 *         Else - ptr to the new node.
 *
 * Description: If parent already has a right-aux, the new node
 *              replace it and the old right-aux is reverted as
 *              the right-aux of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
