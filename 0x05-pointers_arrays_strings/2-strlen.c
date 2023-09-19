#include "main.h"
#include <stdio.h>
/**
*_strlen - main function
*@s: function parameter
*return: cout value
*/

int _strlen(char *s)
{
	int i;
	int cout = 0;

	for(i = 0; s[i] != '\0'; i++)

	cout ++;
	return(cout);
}
