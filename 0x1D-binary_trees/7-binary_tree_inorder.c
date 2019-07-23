#include "binary_trees.h"

/**
*  - Function create a node.
* @: Pointer to the parent node of the node to create.
* @: value to put in the new node.
* Return: New Node.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);

	return;
}
