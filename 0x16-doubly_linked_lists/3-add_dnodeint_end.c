#include "lists.h"

/**
 * add_dnodeint_end - Function add new node to the of the list.
 *
 * @head: Pointer to the head node(Initial).
 * @n: Data type
 *
 * Return: new_node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *nAux = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	new_node->prev = nAux;

	if (*head == NULL)
	{
		(*head) = new_node;
		return (*head);
	}
	while (nAux->next != NULL)
	{
		nAux = nAux->next;
	}
	nAux->next = new_node;
	return (new_node);

}
