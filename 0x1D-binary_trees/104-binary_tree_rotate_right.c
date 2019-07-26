#include "binary_trees.h"

/**
* binary_tree_rotate_right - that performs a right-rotation on a binary tree
* @tree: Pointer to the parent node of the tree to rotate.
* Return: aux pointer to new root
**/

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *aux;

	if (tree == NULL)
		return (0);

	aux = tree->left;
	tree->left = NULL;

	if (aux->right != NULL)
	{
		tree->left = aux->right;
		aux->right->parent = tree;
	}
	aux->right = tree;
	tree->parent = aux;
	aux->parent = NULL;

	return (aux);
}
