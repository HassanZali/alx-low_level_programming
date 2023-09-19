#include "main.h"
#include <stdio.h>

/**
 *puts2 - main function
 *@str: function string
 *
 *
 */

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
	if (i % 2 == 0)
		_putchar(str[i]);
}
	_putchar('\n');
}

