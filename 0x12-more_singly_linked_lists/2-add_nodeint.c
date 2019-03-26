#include "lists.h"

/**
 * add_nodeint - Function create a new node
 *
 * @n: number
 * @head: pointer to pointer
 *
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	if (*head == NULL)
		return (NULL);

	return (*head);
}
