#include "main.h"
#include <stdio.h>
/**
*swap_int - main function
*@a: first parameter
*@b: second parameter
*/

void swap_int(int *a, int *b)
{
int c;

	c = *a;
	*a = *b;
	*b = c;
}

