#include "binary_trees.h"

/**
* binary_tree_preorder - Function create a node.
* @: Pointer to the parent node of the node to create.
* @: value to put in the new node.
* Return: New Node.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

	return;
}
