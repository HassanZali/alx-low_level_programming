#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 *main - this is the main function name
 *@argc: this is the function parameter 1
 *@argv: this is the function parameter 2
 *
 *Return: return 1 and 0.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc == 1)

	printf("%d\n", 0);
	else
	{
	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (!(isdigit(argv[i][j])))
	{
		printf("Error\n");
		return (1);
	}
	}
	sum = sum * atoi(argv[1]);
	}
	printf("%d\n", sum);
	}
	return (0);
}
