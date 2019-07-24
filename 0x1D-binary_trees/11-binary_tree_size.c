#include "binary_trees.h"
/**
* binary_tree_size - Function that measures the size of a binary tree
* @tree: is a pointer to the root node of the tree to measure the size
* Return: size_tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_tree = 0;

	if (tree == NULL)
		return (0);

	size_tree = binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);
	return (size_tree);
}
