#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - this is the main function name
 *@argc: function parameter to count arguments
 *@argv: function parameter to buikd array on arguments
 *
 *Return: return 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		mul = num1 * num2;
		printf("%d\n", mul);
	}
	return (0);
}
