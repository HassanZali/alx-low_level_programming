#include "main.h"

int actual_prime(int n, int i);

/**
 *is_prime_number - this is the main function name
 *@n: function parameter
 *
 *Return: return actual prime number, 0
 */
int is_prime_number(int n)
{
	if (n <= 1)

	return (0);
	return (actual_prime(n, n - 1));
}

/**
 *actual_prime - the function name
 *@n: function parameter 1
 *@i: function parameter 2
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)

	return (1);
	if (n % i == 0 && i > 0)

	return (0);
	return (actual_prime(n, i - 1));
}
