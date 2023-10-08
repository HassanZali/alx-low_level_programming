#include "main.h"
#include <stdbool.h>

/**
 *malloc_checked - this is the main function name to check for memory
 *@b: function parameter 1
 *
 *Return: return pointer value.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Error:Failed to allocate memory\n");
			exit(98);
	}
	return (ptr);
}
