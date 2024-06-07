#include "binary_trees.h"

/**
 * binary_tree_delete - binary tree deletion.
 * @tree: Ptr to the main node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
