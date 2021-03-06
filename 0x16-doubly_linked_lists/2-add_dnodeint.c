#include "lists.h"

/**
 * add_dnodeint - Function insert new node to the begining
 *
 * @head: Pointer to the node inicial
 * @n: Dta type
 * Return: Direccion to the head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nAux = NULL;

	nAux = malloc(sizeof(dlistint_t));
	if (nAux == NULL)
	{
		return (NULL);
	}

	nAux->n = n;
	nAux->next = *head;
	nAux->prev = NULL;

	if (*head == NULL)
	{
		(*head) = nAux;
		return (*head);
	}
	(*head)->prev = nAux;
	*head = nAux;
	return (nAux);
}
