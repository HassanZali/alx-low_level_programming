#include "main.h"

/**
*_strlen - main function
*@s: function parameter
*Return: cout value 0
*/

int _strlen(char *s)
{
	int str;
	int cout = 0;

	for (str = 0 ; s[str] != '\0'; str++)

	cout++;
	return (cout);
}
