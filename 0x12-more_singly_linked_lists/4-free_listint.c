#include "lists.h"

/**
 * free_listint - Function free a list
 *
 * @head: pointer to structure
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
