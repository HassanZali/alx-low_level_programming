#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - this is the function name
 *@width: function parameter to store width
 *@height: function parameter for height
 *
 *Return: return pointers.
 */
int **alloc_grid(int width, int height)
{
	int **zz;
	int x, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	zz = malloc(sizeof(int *) * height);

	if (zz == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
	zz[x] = malloc(sizeof(int *) * width);
	if (zz[x] == NULL)
	{
	for (;x >= 0; x--)
			free(zz[x]);
		free(zz);
	return (NULL);
	}
	}
	for (x = 0; x < height; x++)
	{
	for (i = 0; i < width; i++)
		zz[x][i] = 0;
	}
	return (zz);
}
