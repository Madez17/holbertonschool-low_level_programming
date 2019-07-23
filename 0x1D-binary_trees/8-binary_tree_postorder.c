#include "binary_trees.h"

/**
* binary_tree_node - Function create a node.
* @parent: Pointer to the parent node of the node to create.
* @value: value to put in the new node.
* Return: New Node.
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if(!tree)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
