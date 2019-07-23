#include "binary_trees.h"

/**
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
*  - Function create a node.
* @: Pointer to the parent node of the node to create.
* @: value to put in the new node.
* Return: New Node.
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
