#include "main.h"

/**
 *_puts_recursion - the main function name
 *
 *@s: main function parameter 1
 *
 *Return 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')

	{
	putchar('\n');
	return ;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
