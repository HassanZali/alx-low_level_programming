#include "main.h"

/**
 *str_concat - main function name
 *@s1: function parameter 1
 *@s2: function parameter 2
 *
 *Return: return pointer.
 */
char *str_concat(char *s1, char *s2)
{
	int i, r;
	char *conct;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	i = r = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[r] != '\0')
		r++;
	conct = malloc(sizeof(char) * (i + r + 1));

	if (conct == NULL)
		return (NULL);
	i = r = 0;

	while (s1[i] != '\0')
		{
		conct[i] = s1[i];
			i++;
		}
	while (s2[r] != '\0')
		{
		conct[i] = s2[r];
		i++, r++;
		}
		conct[i] = '\0';
	return (conct);
}
