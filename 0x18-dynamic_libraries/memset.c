#include "main.h"

/**
 *_memset - this is the function name from the prototype
 *@s: function parameter s
 *@b: function parameter b
 *@n: function parameter n
 *Return: the value of s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)

	{
		s[z] = b;
	}
	return (s);
}
