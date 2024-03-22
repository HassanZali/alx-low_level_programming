#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = *head;
	dlistint_t *next = current->next->next;

	for (i = 0; current != NULL && i < index - 1; i++)
	current = current->next;

	if (*head == NULL)
	return -1;

	if (index == 0)
	{
	*head = current->next;
	if (current->next != NULL)
		current->next->prev = NULL;
	free(current);
	return 1;
	}

	if (current == NULL || current->next == NULL)
	return -1;

	free(current->next);
	current->next = next;

	if (next != NULL)
	{
	next->prev = current;
	}
	return 1;
}
