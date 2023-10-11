#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *print_dog - this is the main function name
 *@d: function parameter 1
 *
 *Return: return 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nowner: %s\n", d->name, d->age, d->owner);
}
