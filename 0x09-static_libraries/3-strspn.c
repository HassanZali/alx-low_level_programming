#include "main.h"

/**
 *_strspn - this is the main function
 *@s: function parameter 1
 *@accept: parameter funtion 2
 *
 *Return: return the value of i
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int _strspn(char *s, char *accept);
	unsigned int i = 0;
	int k;

	while (*s)
	{
	for (k = 0; accept[k]; k++)
	{
	if (*s == accept[k])
	{
	i++;
	break;
	}
	else if (accept[k + 1] == '\0')
	return (i);
	}
	s++;
	}
	return (i);
}
