#include "lists.h"

/**
 * get_dnodeint_at_index - Function Iter index and print this.
 *
 * @head: Pointer First(node initial)
 * @index: Number of node.
 * Return: aux 
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int iter2 = 0;
	
	if (head == NULL)
		return (NULL);
	while (iter2 != index)
	{
		aux = aux->next;
		iter2++;
		if (aux ==NULL)
			return (NULL);
	}
	return (aux);
}
