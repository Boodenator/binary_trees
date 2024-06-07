#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverseation into binary tree by post-order traverse.
 * @tree: Ptr to the root node of the tree for traverse.
 * @func: Ptr to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
