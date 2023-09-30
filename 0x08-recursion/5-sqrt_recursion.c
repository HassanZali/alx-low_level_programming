#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - this is the main function name
 * @n: parameter to calculate the square root
 *
 * Return: return the resulting square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)

	return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - this is the function name
 * @n: function parameter 1
 * @i: function parameter 2
 *
 * Return: return the square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)

	return (-1);

	if (i * i == n)

	return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
