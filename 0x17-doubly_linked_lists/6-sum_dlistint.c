#include "lists.h"

/**
*sum_dlistint - func to sum the dlist
*@head: pointer to the list
*
*Return: return the sum.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
