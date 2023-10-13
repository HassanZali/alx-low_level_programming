#include "function_pointers.h"
#include <stdio.h>

/**
*array_iterator - this is the main fumctuon name to prints elem on an array
*@array: function parameter array
*@size: this is the size of parameters
*@action: pointer to print in regular or hexadecimal
*
*Return: void.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
