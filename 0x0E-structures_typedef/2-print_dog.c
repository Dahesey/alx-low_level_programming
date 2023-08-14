/**
  * print_dog - A function to print a dog's details
  * @d: A pointer to a struct
  * Author - Dahesey
  * Return: NULL if d is NULL and Nil if name,age,owner are null
  */
#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age < 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
