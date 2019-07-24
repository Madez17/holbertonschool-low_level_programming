#include "binary_trees.h"
/**
* binary_tree_delete - Function delete a tree
* @tree: Pointer to the parent node of the node to create.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
