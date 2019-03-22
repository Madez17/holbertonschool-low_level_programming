#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node -
 *
 * Return: 
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t head* new_node = (list_t head*) malloc(sizeof(list_t head));
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = (*head);
	(*head) = new_node;
	
	for (i = 0; i != '\0'; i++)
		;

	if (new_node == NULL)
		return (NULL);
	return (&new_node);

}
