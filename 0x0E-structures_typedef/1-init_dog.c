/**
  * init_dog - A function to initialize a structure
  * Author - Dahesey
  * @d: A pointer to a structure
  * @name: Char element of structure
  * @age: Int element of structure
  * @owner: Char element of structure
  */

#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
		d->name = name;
		d->age = age;
		d->owner = owner;
}
