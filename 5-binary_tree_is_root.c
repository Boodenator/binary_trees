#include "binary_trees.h"

/**
 * binary_tree_is_root - Checking the node if its root of binary tree.
 * @node: Ptr to the node for checking.
 *
 * Return: If root node - 1.
 *         Else - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
