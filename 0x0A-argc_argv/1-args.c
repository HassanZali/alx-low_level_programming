#include "main.h"
#include <stdio.h>

/**
 *main - this is the main function name
 *@argc: function parameter to count arguments
 *@argv: function parameter for argument vector
 *
 *Return: return 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
