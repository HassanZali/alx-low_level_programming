#include "main.h"

/**
 *_strchr - main function prototype
 *@s: function prototype
 *@c: function prototype c
 *
 *Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
	if (s[k] == c)
	return (s + k);
	}
	return (0);
}
