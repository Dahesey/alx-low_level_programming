/**
  * new_dog - A function to create a new dog
  * @name: element of the new struct
  * @age: second element of the struct
  * @owner: third element of the struct
  * Author: dahesey
  */

#include <stdio.h>
#include "dog.h"
#include <stdlib>

dog_t *new_dog(char *name, float age, char *owner)
{
	char *p;

	if (p != NULL)
	{
		p->name = name;
		p->age = age;
		p->owner = owner;
	}
}
