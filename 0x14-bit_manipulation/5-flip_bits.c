#include "main.h"

/**
*flip_bits - counts the number of bits to flip  from one number to another
* @n: first parameter
* @m: second parameter
*
* Return: number of bits to fliped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, countbit = 0;
	unsigned long int k;
	unsigned long int x = n ^ m;
	for (a = 63; a >= 0; a--)
	{
		k = x >> a;
		if (k & 1)
		countbit++;
	}
	return (countbit);
}
