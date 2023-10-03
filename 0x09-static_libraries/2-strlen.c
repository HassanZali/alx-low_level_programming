#include "main.h"

/**
*_strlen - main function
*@s: function parameter
*Return: cout value 0
*/

int _strlen(char *s)
{
	int i;
	int cout = 0;

	for (i = 0 ; s[i] != '\0'; i++)

	cout++;
	return (cout);
}
