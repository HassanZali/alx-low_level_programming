#include "main.h"
#include <stdlib.h>

/**
 *array_range - this is function name
 *@min: function parameter 1
 *@max: function parameter 2
 *
 *Return: return NULL ,ptr.
 */
int *array_range(int min, int max)
{
	int i;
	int size = max - min + 1;
	int *arr = malloc(size * sizeof(int));

	if (min > max)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)

	{
		arr[i] = min + i;
	}
	return (arr);
}
