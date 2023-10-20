#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node - function to add a new node to the beginning of a linked list
* @head: parameter for head pointer to the list_t list
* @str: new string to add in the node
*
* Return: return the address of the new element, or NULL otherwise.
*/
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new;

	while (str[len])
	len++;
	new = malloc(sizeof(list_t));

	if (!new)
	return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
