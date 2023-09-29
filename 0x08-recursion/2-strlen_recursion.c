#include "main.h"

/**
 *_strlen_recursion - this is the main funcion name
 *
 *@s: function parameter 1
 *
 *Return: _strlen_recursion (s + 1).
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')

	{
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
