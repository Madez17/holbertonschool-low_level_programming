#include "binary_trees.h"

/**
* binary_tree_node - Function create a node.
* @parent: Pointer to the parent node of the node to create.
* @value: value to put in the new node.
* Return: New Node.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *new = NULL;

	while (1)
	{
		if (tree->left == NULL && tree->right == NULL);
		{
			free(tree);
			return;
		}
		else if (tree->left != NULL)
			binary_tree_delete(tree->left);
		else
			binary_tree_delete(tree->right);
	}
}
