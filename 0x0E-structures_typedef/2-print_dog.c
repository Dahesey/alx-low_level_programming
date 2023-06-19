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
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d == NULL)
		printf("(nil)\n");
	printf("Name: %s\n", d->name);
	printf("Age: %1f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
