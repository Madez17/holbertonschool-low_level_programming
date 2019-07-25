#include "binary_trees.h"

/**
* binary_tree_t - function that finds the sibling of a node.
* @node: is a pointer to the node to find the sibling.
* Return: sibling.
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return NULL;

	parent = node->parent;

	if (parent->left != NULL && parent->right != NULL)
	{
		if (parent->right == node)
			return (parent->left);
		else
			return (parent->right);
	}
	return (NULL);
}
