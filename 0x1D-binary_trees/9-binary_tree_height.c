#include "binary_trees.h"

/**
* height_left - Function count the left submodules
* @tree: is a pointer to the root node of the tree to measure the size
* Return: left height tree.
**/

size_t height_left(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	left = height_left(tree->left);
	right = height_left(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}


/**
* height_right - Function count the right submodules
* @tree: is a pointer to the root node of the tree to measure the size
* Return: Right height tree.
**/

size_t height_right(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	left = height_left(tree->left);
	right = height_left(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}


/**
* binary_tree_height - Function that measures the height of a binary tree
* @tree: Pointer to the parent node of the node to create.
* Return: height tree.
**/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;


	if (tree == NULL)
		return (0);

	count_left = height_left(tree->left);
	count_right = height_right(tree->right);

	if (count_left < count_right)
	{
		return (count_right);
	}
	return (count_left);
}
