#include "main.h"
#include <string.h>

/**
*_puts - main function
*@s: string
*/

void _puts(char *s)

{
	int i;
	for (i = 0; s[i] != '\0'; i++)

	_putchar (s[i]);
	_putchar ('\n');
}
