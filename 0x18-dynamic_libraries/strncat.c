#include "main.h"

/**
 *_strncat - function main
 *@dest: first parameter
 *@src: second parameter
 *@n: third parameter
 *Return: dest value
 */

char *_strncat(char *dest, char *src, int n)
{
int h, z;
h = 0;
z = 0;

while (dest[h] != '\0')
{
	h++;
}

while (z < n && src[z] != '\0')
{
	dest[h] = src[z];
	h++;
	z++;
}
	dest[h] = '\0';
	return (dest);
}
