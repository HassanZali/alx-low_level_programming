#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - this is the main function name
 *@dog *d: function parameter 1
 *@d: function parameter 2
 *@name: function parameter 3
 *@age: function parameter 4
 *@owner: function parameter 5
 *
 *Return: return 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
