#include "binary_trees.h"
/**
* binary_tree_rotate_left - performs a left-rotation on a binary tree
* @tree: pointer to the root node of the tree to rotate.
* Return: pointer to the new root node of the tree once rotated
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_p = NULL;

	if (!tree || !tree->right)
		return (NULL);

	new_p = tree->right;
	if (new_p->left)
	{
		new_p->left->parent = tree;
		tree->right = new_p->left;
	}
	else
		tree->right = NULL;

	new_p->left = tree;
	tree->parent = new_p;
	new_p->parent = NULL;

	return (new_p);
}
