#include "lists.h"

/**
 * free_listint2 - free memory space
 *
 * @head: pointer to pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	while (*head != NULL)
	{
		aux = *head;
		*head = (*head)->next;
		free(aux);
	}
}
