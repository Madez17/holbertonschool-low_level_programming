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
* number_nodes - Checks the height of the left side of the tree
* @tree: pointer to the root node of the tree to measure the balance
* @count: count the number of nodes of the tree
* Return: void
**/
void number_nodes(const binary_tree_t *tree, int *count)
{
	if (tree == NULL)
		return;

	number_nodes(tree->left, count);
	number_nodes(tree->right, count);
	*count += 1;
}


/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: pointer to the root node of the tree to measure the balance
* Return: the difference between the left and the right sides of the tree.
**/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int count, i, pow = 1, n_nodes, height;
	int count_left = 0, count_right = 0;

	if (tree == NULL)
		return (0);

	count_left = height_left(tree->left);
	count_right = height_right(tree->right);
	number_nodes(tree, &count);

	if (count_left > count_right)
		height =  count_left;
	else
		height = count_right;

	for (i = 0; i < height + 1; i++)
		pow *= 2;

	n_nodes = pow - 1;
	if (count == n_nodes)
		return (1);

	return (0);
}
