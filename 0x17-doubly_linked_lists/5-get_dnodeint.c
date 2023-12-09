#include "lists.h"

/**
*get_dnodeint_at_index - func returns the nth node of a dlistint_t
*@head: pointer to the head of the linked list
*@index: index of the node, starting from 0
*Return: pointer to the nth node, or NULL if the node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int u = 0;

	while (head != NULL)
	{
	if (u == index)
		return (head);
	u++;
	head = head->next;
	}
	return (NULL);
}
