#include "main.h"

/**
 *_strcmp - main function
 *@s1: function parameter one
 *@s2: function parameter two
 *Return: return 0 successful
 */

int _strcmp(char *s1, char *s2)
{
int k = 0;

while (s1[k] != '\0' && s2[k] != '\0')

{

	if (s1[k] != s2[k])

{
	return (s1[k] - s2[k]);
}
	k++;
}
	return (0);
}
