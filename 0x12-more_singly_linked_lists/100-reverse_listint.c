#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *auxf = NULL;
	listint_t *auxe;

	while ((*head) != NULL)
	{
		auxe = (*head)->next;
		(*head)->next = auxf;
		auxf = *head;
		*head = auxe;
	}
	return (auxe);
	
}
