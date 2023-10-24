#include "lists.h"

/**
* add_nodeint_end - adds a node to the end of a linked list
* @head: pointer to the first element in the list
* @n: data to insert in the new element
*
* Return: return pointer to the new node, or NULL if fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
