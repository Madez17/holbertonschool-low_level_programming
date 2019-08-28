#include "binary_trees.h"

/**
* bst_right - performs a right bst check
* @tree: pointer to the root node of the tree to rotate.
* @root: pointer to the root value
* Return: 1 if bst or 0 if not
*/
int bst_right(const binary_tree_t *tree, int *root)
{
	int lbst = 0, rbst = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->left->n < tree->n && tree->left->n > *root)
		lbst = bst_right(tree->left, root);
	if (tree->right && tree->right->n > tree->n && tree->right->n > *root)
		rbst = bst_right(tree->right, root);

	if (lbst != 1 && rbst != 1)
		return (0);

	return (1);
}

/**
* bst_left - performs a left bst search
* @tree: pointer to the root node of the tree to rotate.
* @root: pointer to the root value
* Return: 1 if bst or 0 if not
*/
int bst_left(const binary_tree_t *tree, int *root)
{
	int lbst = 0, rbst = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->left->n < tree->n && tree->left->n < *root)
		lbst = bst_left(tree->left, root);

	if (tree->right && tree->right->n > tree->n && tree->right->n < *root)
		rbst = bst_left(tree->right, root);

	if (lbst != 1 || rbst != 1)
		return (0);

	return (1);
}

/**
* binary_tree_is_bst - performs a left-rotation on a binary tree
* @tree: pointer to the root node of the tree to rotate.
* Return: 1 if bst or 0 if not
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int lbst = 0, rbst = 0, root = 0;

	if (!tree)
		return (0);

	root = tree->n;
	lbst = bst_left(tree->left, &root);
	rbst = bst_right(tree->right, &root);

	if (lbst != 1 || rbst != 1)
		return (0);
	return (1);
}
