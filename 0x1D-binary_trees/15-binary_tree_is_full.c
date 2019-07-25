#include "binary_trees.h"

/**
* height_left - Function count the left submodules
* @tree: is a pointer to the root node of the tree to measure the size
* Return: left height tree.
**/

int height_left(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);

	left = height_left(tree->left);
	right = height_left(tree->right);

	if (left != right)
		return (0);

	return (1);
}


/**
* height_right - Function count the right submodules
* @tree: is a pointer to the root node of the tree to measure the size
* Return: Right height tree.
**/

int height_right(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);

	left = height_left(tree->left);
	right = height_left(tree->right);

	if (left != right)
		return (0);

	return (1);
}


/**
* binary_tree_height - Function that measures the height of a binary tree
* @tree: Pointer to the parent node of the node to create.
* Return: height tree.
**/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int count_left = 0;
	int count_right = 0;


	if (tree == NULL)
		return (0);

	count_left = height_left(tree->left);
	count_right = height_right(tree->right);

	if (count_left != count_right)
	{
		return (0);
	}
	return (1);
}
