#include "binary_trees.h"

/**
* height_left - Function count the left submodules
* @tree: is a pointer to the root node of the tree to measure the size
* @count: counter var
*
**/

size_t height_left(const binary_tree_t *tree, size_t *count)
{
	if (tree == NULL)
		return (*count);

	*count = *count + 1;
	height_left(tree->left, count);
	height_left(tree->right, count);

	return (*count);
}


/**
* height_right - Function count the right submodules
* @tree: is a pointer to the root node of the tree to measure the size
* @count: counter var
* Return: count
**/

size_t height_right(const binary_tree_t *tree, size_t *count)
{
	if (tree == NULL)
		return (*count);

	*count = *count + 1;
	height_right(tree->left, count);
	height_right(tree->right, count);

	return (*count);
}


/**
* binary_tree_height - Function that measures the height of a binary tree
* @tree: Pointer to the parent node of the node to create.
* Return: count_left.
**/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;


	if (tree == NULL)
		return (0);

	count_left = height_left(tree->left, &count_left);
	count_right = height_right(tree->right, &count_right);

	if (count_left < count_right)
	{
		return (count_right);
	}
	return (count_left);
}
