#include "binary_trees.h"

/**
 * binary_tree_preorder - iterate via binary tree using pre-order traversal.
 * @tree: Ptr to root node of the tree for traverseing.
 * @func: Ptr to a function which call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
