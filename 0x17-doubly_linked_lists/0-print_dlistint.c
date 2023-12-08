#include <stdio.h>
#include "lists.h"
/**
 *print_dlistint - func to print elements in dlistint
 *@h: pointer 
 *
 *Return the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return nodes;
}
