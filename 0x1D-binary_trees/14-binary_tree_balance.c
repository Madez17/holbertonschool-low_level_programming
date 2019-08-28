#include "binary_trees.h"

/**
* height_left - Checks the height of the left side of the tree
* @tree: pointer to the root node of the tree to measure the balance
* Return: height of the tree.
**/
int height_left(const binary_tree_t *tree)
{
	int hleft = 0, hright = 0;

	if (tree == NULL)
		return (0);

	hleft = height_left(tree->left);
	hright = height_left(tree->right);
	if (hleft > hright)
	{
		return (hleft + 1);
	}
	return (hright + 1);
}

/**
* height_right - Checks the height of the left side of the tree
* @tree: pointer to the root node of the tree to measure the balance
* Return: height of the tree.
**/
int height_right(const binary_tree_t *tree)
{
	int hleft = 0, hright = 0;

	if (tree == NULL)
		return (0);

	hleft = height_right(tree->left);
	hright = height_right(tree->right);
	if (hleft > hright)
	{
		return (hleft + 1);
	}
	return (hright + 1);
}


/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node of the tree to measure the balance
* Return: the difference between the left and the right sides of the tree.
**/
int binary_tree_balance(const binary_tree_t *tree)
{
	int count_left = 0;
	int count_right = 0;

	if (tree == NULL)
		return (0);

	count_left = height_left(tree->left);
	count_right = height_right(tree->right);

	return (count_left - count_right);
}
