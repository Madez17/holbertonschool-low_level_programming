#include "binary_trees.h"
/**
* binary_tree_insert_left - Function create a node.
* @parent: Pointer to the parent node of the node to create.
* @value: value to put in the new node.
* Return: New Node.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL, *aux = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;

	if (parent->left != NULL)
	{
		aux = parent->left;
		aux->parent = new;
		new->left = aux;
	}
	parent->left = new;
	return (new);
}
