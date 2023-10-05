#include "main.h"

/**
 *create_array - this is the main function name
 *
 *@size: size of array to be created
 *@c: takes c as char constant
 *
 *Return: return array value.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
