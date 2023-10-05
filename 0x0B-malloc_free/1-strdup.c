#include "main.h"

/**
 *_strduo - this is the main name
 *@str: character pointer to string
 *
 *Return: value of copy .
 */
char *_strdup(char *str)
{
	char *copy;
	int count = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];
	return (copy);
}
