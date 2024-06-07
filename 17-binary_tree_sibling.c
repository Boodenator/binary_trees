#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a
 *                       node in a binary tree.
 * @node: Ptr to the node for finding its sibling.
 *
 * Return: If node is NULL or no sibling present - NULL.
 *         Otherwise - Ptr to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
