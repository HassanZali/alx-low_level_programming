#include "main.h"

/**
 *_strdup - this is the main name
 *@str: character pointer to string
 *
 *Return: value of copy .
 */
char *_strdup(char *str)
{
	char *copy;
	int i, r = 0;

	i = 0;
	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;
	copy = malloc(sizeof(char) * (i + 1));

	if (copy == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		copy[r] = str[r];
	return (copy);
}
