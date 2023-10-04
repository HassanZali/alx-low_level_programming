#include "main.h"
#include <stdio.h>

/**
 *main - this is the main function name
 *@argc: function parameter to count
 *@argv: function parameter for array
 *
 *Return: return 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
