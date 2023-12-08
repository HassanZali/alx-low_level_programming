#include "lists.h"

/**
 *add_dnodeint_end - func to add a new node to a list
 *@head: pointer to the list
 *@n: constant parameter
 *
 *Return: return address of the element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *hush;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		hush = *head;
		while (hush->next != NULL)
		{
			hush = hush->next;
		}
		hush->next = new_node;
		new_node->prev = hush;
	}
	return (new_node);
}
