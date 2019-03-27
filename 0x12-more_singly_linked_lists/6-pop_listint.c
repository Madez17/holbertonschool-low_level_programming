#include "lists.h"

/**
 * pop_listint - function delete first node
 *
 * @head: pointer to pointer
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int n;

	if (*head == NULL)
		return (0);

	aux = *head;

	if (aux != NULL)
	{
		*head = aux->next;
		n = aux->n;
		free(aux);
		aux = NULL;
	}
	return (n);


}
