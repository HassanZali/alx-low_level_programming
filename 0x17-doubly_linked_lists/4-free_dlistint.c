#include "lists.h"

/**
*free_dlistint - func to free dlist
*@head: pointer to list
*
*Return: return nothing.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
