#include "main.h"

/**
  *print_chessboard - the main function name
  *
  *@a: function parameter
  *
  *Return: return 0 always.
  */

void print_chessboard(char (*a)[8])
{
	int z;
	int r;

	for (z = 0; z < 8; z++)

	{

	for (r = 0; r < 8; r++)

	_putchar(a[z][r]);
	_putchar('\n');
	}
}
