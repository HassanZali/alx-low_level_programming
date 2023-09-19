#include "main.h"
#include <stdio.h>

/**
 *puts_half - main function
 *@str: function string
 */

void puts_half(char *str)
{
int i;
int n;
int count = 0;

for (i = 0; str[i] != '\0'; i++)

	count++;
n = (count - 1) / 2;

for (i = n + 1; str[i] != '\0'; i++)
{
	_putchar(str[i]);
}
	_putchar('\n');
}
