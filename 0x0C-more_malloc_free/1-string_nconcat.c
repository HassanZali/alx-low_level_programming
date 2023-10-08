#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 *string_nconcat - this is the main function name to concatinate string
 *@s1: function parameter 1
 *@s2: function parameter 2
 *@n: function parameter for unsigned int
 *
 *Return: return NULL and result value.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);
char *result = (char *)malloc(s1_len + n + 1);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= s2_len)
		n = s2_len;

	if (result == NULL)
		return (NULL);


	strncpy(result, s1, s1_len);
	strncat(result + s1_len, s2, n);

	result[s1_len + n] = '\0';
	return (result);
}
