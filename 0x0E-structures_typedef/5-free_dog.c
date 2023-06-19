/**
 * free_dog - function that free memory that has previously been allocated dynamically using malloc
 *
 * Author - dahesey
 *
 * @d: A pointer to structure of name dog_t
 */

#include "dog.h"
#include <stdlib.h>

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
