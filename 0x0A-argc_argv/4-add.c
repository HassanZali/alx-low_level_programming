#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 *check_num - this is the function name to check num
 *@str: function parameter to point string
 *
 *Return: return 0.
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;

	while (count < strlen(str))
	{
	if (!isdigit(str[count]))
	{
		return (0);
	}
	count++;
	}
	return (1);
}

/**
 *main - this is the function name
 *@argc: function parameter 1
 *@argv: function parameter 2
 *Return: return 1 and 0.
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc)
	{
	if (check_num(argv[count]))
	{
		str_to_int = atoi(argv[count]);
		sum += str_to_int;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
