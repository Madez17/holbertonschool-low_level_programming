#include "binary_trees.h"

/**
* leaves_count - function that modify the counter to check the depth of a bt.
* @tree: pointer to the node to measure the depth.
* @count: pointer to the counter.
* Return: depth of the node.
**/
size_t leaves_count(const binary_tree_t *tree, size_t *count)
{
	if (tree == NULL)
		return (*count);

	leaves_count(tree->left, count);
	leaves_count(tree->right, count);
	if (!tree->left && !tree->right)
		*count += 1;

	return (*count);
}

/**
* binary_tree_leaves - function that counts the leaves in a binary tree.
* @tree: pointer to the node to measure the depth.
* Return: number of leaves.
**/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	count = leaves_count(tree, &count);

	return (count);
}
