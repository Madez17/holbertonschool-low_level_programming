#include "lists.h"

/**
 * free_dlistint - Function free allocs
 * @head: head pointer to initial node
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
