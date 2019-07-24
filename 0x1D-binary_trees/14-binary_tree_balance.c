#include "binary_trees.h"

/**
**/
int height_left(const binary_tree_t *tree, int *count)
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
int height_right(const binary_tree_t *tree, int *count)
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
int binary_tree_balance(const binary_tree_t *tree)
{
        int count_left = 0;
	int count_right = 0;


	if (tree == NULL)
		return (0);

	count_left = height_left(tree->left, &count_left);
	count_right = height_right(tree->right, &count_right);

	if (count_left < count_right)
	{
		return (count_right - count_left);
	}
	return (count_left - count_right);
}
