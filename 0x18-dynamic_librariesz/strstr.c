#include "main.h"

/**
  *_strstr - this is the  main function
  *
  *@needle: function parameter 1
  *
  *@haystack: function parameter 2
  *
  *Return: Always 0.
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)

	{
	char *I = haystack;
	char *P = needle;

	while (*I == *P && *P != '\0')

	{
	I++;
	P++;
	}
	if (*P == '\0')
	return (haystack);
	}
	return (0);
}
