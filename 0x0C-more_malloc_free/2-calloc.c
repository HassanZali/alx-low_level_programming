#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_calloc - main function name to create memory
 *@nmemb: function parameter 1
 *@size: function parameter 2
 *
 *Return: return ptr.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
