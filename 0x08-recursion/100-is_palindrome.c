#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 *is_palindrome - this is the main functin name to check palindrome
 *@s: main function parameter
 *
 *Return: return 1 if true, 0 if not.
 */
int is_palindrome(char *s)
{

	if (*s == 0)

	return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 *_strlen_recursion - this is the function name
 *@s: function parameter to calculate string
 *
 *Return: return the length of the string.
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')

	return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 *check_pal - function name to checks the characters recursively for palindrome
 *@s: function parameter 1
 *@i: function parameter 2
 *@i: iterator parameter
 *@len: length of the string
 *
 *Return: return 1 if palindrome, 0 if not.
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))

	return (0);
	if (i >= len)

	return (1);
	return (check_pal(s, i + 1, len - 1));
}
