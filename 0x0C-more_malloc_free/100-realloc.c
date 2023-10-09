#include "main.h"
#include <stdlib.h>

/**
 *_realloc - function name to reallocate memory
 *@ptr: function parameter for pointer
 *@old_size: function parameter 1
 *@old_size: function parameter 2
 *@new_size: function parameter 3
 *
 *Return: return NULL and pointer value.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_ptr;
	void *new_ptr;
	unsigned int i;
	unsigned int min_size;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	new_ptr = malloc(new_size);

	if (!new_ptr)
		return (NULL);
	old_ptr = ptr;
	min_size = old_size < new_size ? old_size: new_size;

	for (i = 0; i < min_size; i++)
		((char *)new_ptr)[i] = old_ptr[i];
	free(ptr);
	return (new_ptr);
}
