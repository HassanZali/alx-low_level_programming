#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *memset - this is the function name
 *@s: function parameter 1
 *@b: function parameter 2
 *@n: function parameter 3
 *
 *Return: return s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

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
		return (NULL);

	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
