#include "main.h"

/**
 *_pow_recursion - the main function name
 *
 *@x: function parameter 1
 *
 *@y: function parameter 2
 *
 *Return: -1,_pow_recursion 1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)

	return (-1);
	if (y == 0)
	return (1);
	return (x * _pow_recursion(x, y - 1));
}
