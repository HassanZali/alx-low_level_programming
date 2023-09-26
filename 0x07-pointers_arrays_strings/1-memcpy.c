#include "main.h"

/**
 *_memcpy - main function name
 *@dest: function parameter dest
 *@src: function patameter src
 *@n: parameter n
 *Return dest value.
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
