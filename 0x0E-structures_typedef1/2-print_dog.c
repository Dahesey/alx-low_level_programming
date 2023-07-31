/**
 * print_dog - A funtion that prints elements of a structure
 *
 * Author - Dahesey
 *
 * @d: A pointer  to elements of a structure
 */

#include "dog.h"
#include <stdio.h>
void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
		printf("Age: ");
		(d->age < 0) ? printf("(nil)\n") : printf("%1f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
	}
}
