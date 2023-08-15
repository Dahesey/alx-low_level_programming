/**
  * free_dog - A function that frees dogs
  * @d: A pointer to the structure
  * Author: Dahesey
  */
#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d->name);
		free(d->owner);
		free(d);
}
