#include "binary_trees.h"

/**
 * binary_tree_node - new binary tree node creation.
 * @parent: Ptr to parent of the newly node.
 * @value: The inserted value in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Else - ptr to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
