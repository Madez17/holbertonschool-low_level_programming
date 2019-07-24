#include "binary_trees.h"
/**
* binary_tree_insert_right - Function create a node.
* @parent: Pointer to the parent node of the node to create.
* @value: value to put in the new node.
* Return: New Node.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL, *aux = NULL;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;

	if (parent->right != NULL)
	{
		aux = parent->right;
		aux->parent = new;
		new->right = aux;
	}
	parent->right = new;
	return (new);
}
