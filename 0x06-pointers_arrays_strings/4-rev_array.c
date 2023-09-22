#include "main.h"

/**
 *reverse_array - main function
 *@a: function parameter one
 *@n: function parameter two
 *Return void
 */
void reverse_array(int *a, int n)
{
int h, z;

for (h = 0; h < n--; h++)

{
	z = a[h];
	a[h] = a[n];
	a[n] = z;
}
}
