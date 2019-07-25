#include "binary_trees.h"

/**
* count_parents - checks if there are grandpas
* @node: pointer to the root node of the tree to measure the balance
* @count: count the number of nodes of the tree
* Return: grandpa of the node
**/
binary_tree_t *count_parents(binary_tree_t *node, int *count)
{
	binary_tree_t *uncle = NULL;

	if (node == NULL)
		return (NULL);
	if (*count == 2)
		return (node);

	*count += 1;
	uncle = count_parents(node->parent, count);

	return (uncle);
}


/**
* binary_tree_uncle - finds the uncle of a node
* @node: pointer to the root node of the tree to measure the balance
* Return: uncle of the node
**/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;
	int count = 0;

	if (node == NULL)
		return (0);

	uncle = count_parents(node, &count);
	if (!uncle)
		return (NULL);

	if (uncle->right && uncle->right != node->parent)
		return (uncle->right);
	else if (uncle->left)
		return (uncle->left);
	else
		return (NULL);
}
