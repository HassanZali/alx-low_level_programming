#include "main.h"

/**
 *_strpbrk - this is the function main
 *@s: function parameter 1
 *@accept: function parameter 2
 *
 *Return: always return 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int k;
	int j;

	for (k = 0; s[k] != '\0'; k++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[k] == accept[j])
	return (s + k);
	}
	}
	return (0);
}
