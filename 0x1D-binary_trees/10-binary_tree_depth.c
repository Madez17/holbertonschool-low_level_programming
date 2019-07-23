#include "binary_trees.h"

size_t parent_count(const binary_tree_t *tree, size_t *count)
{
	if (tree == NULL)
		return (*count);
	
	parent_count(tree->parent, count);
	*count += 1;

	return (*count);
}
 
/**
*  - Function create a node.
* @: Pointer to the parent node of the node to create.
* @: value to put in the new node.
* Return: New Node.
**/

size_t binary_tree_depth(const binary_tree_t *tree)
{
        size_t count = 0;
	

	if (tree->parent == NULL)
		return (0);

	count = parent_count(tree->parent, &count);

	return (count);
}
