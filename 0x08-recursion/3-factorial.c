#include "main.h"

/**
 *factorial - the main function name
 *
 *@n: function parameter 1
 *
 *Return: result.
 */
int factorial(int n)
{
	if (n == 0 || n == 1)

	{
	return (1);
	}
	else

	{
	int result = 1;

	while (n > 1)

	{
	result *= n;
	n--;
	}
	return (result);
	}
}
