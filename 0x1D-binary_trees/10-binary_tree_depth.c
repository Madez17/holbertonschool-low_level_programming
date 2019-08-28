#include "binary_trees.h"

/**
* parent_count - function that modify the counter to check the depth of a bt.
* @tree: pointer to the node to measure the depth.
* @count: pointer to the counter.
* Return: depth of the node.
**/
size_t parent_count(const binary_tree_t *tree, size_t *count)
{
	if (tree == NULL)
		return (*count);

	parent_count(tree->parent, count);
	*count += 1;

	return (*count);
}

/**
* binary_tree_depth - measures the depth of a node in binary tree.
* @tree: pointer to the node to measure the depth.
* Return: depth of the node.
**/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree || tree->parent == NULL)
		return (0);

	count = parent_count(tree->parent, &count);

	return (count);
}
