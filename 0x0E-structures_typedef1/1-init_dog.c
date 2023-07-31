/**
 * init_dog - Function that initializes elements of a structure
 *
 * Author - Dahesey
 *
 * @d: A pointer to structure
 *
 * @name: A pointer to  element of structure
 *
 * @age: Second element of structure
 *
 * @owner: A pointer to element of structure
 */

#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
