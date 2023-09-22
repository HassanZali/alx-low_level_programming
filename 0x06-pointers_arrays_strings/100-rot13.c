#include "main.h"
#include <stdio.h>

/**
 *rot13 - main function name
 *
 *@s: string pointer
 *
 *Return string function
 */
char *rot13(char *s)
{

int k, r;
char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	for (k = 0; s[k] != '\0'; k++)

{
	for (r = 0; r < 52; r++)

{
	if (s[k] == data[r])

{
	s[k] = datarot[r];
	break;
}
}
}
return (s);
}

