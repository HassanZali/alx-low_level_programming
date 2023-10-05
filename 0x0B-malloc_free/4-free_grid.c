#include "main.h"

/**
 *free_grid - the function name
 *@grid: function parameter 1
 *@height: function parameter 2
 *
 *Return: return void.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
