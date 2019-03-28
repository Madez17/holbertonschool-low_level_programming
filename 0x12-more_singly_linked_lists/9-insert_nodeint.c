#include "lists.h"

/**
 * get_nodeint_at_index - Function search index and return value.
 *
 * @head: pointer to structure
 * @index: Number of position
 *
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
	unsigned int iter = 0;

	aux = head;

	while (aux != NULL)
	{
		if (iter == index)
		{
			return (aux);
		}
		iter++;
		aux = aux->next;
	}
	return (NULL);
}

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

/**
 * insert_nodeint_at_index - Insert new node
 *
 * @head: pointer to pointer
 * @idx: number index(poscition)
 * @n: value.
 *
 * Return: address new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux;
	listint_t *new_node;

	if (idx == 0)
	{
		add_nodeint(head, n);
		return  (*head);
	}
	aux = get_nodeint_at_index(*head, idx - 1);

	if (!aux)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = aux->next;
	aux->next = new_node;
	return (new_node);
}
