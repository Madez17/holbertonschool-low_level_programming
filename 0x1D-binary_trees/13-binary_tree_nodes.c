#include "binary_trees.h"
/**
* binary_tree_nodes - Function verify if is a root
* @tree: is a pointer to the node to check.
* Return: count
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		count =  binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right);
	}
	return (count);
}
