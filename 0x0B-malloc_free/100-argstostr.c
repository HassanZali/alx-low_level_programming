#include "main.h"

/**
 *argstostr - this is the function name
 *@ac: function parameter 1
 *@av: function parameter 2
 *
 *Return: return 0.
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, k = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		k++;
	}
	k += ac;

	str = malloc(sizeof(char) * k + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}
