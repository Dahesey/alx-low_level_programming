/**
  * new_dog - A function to create a new dog
  * @name: element of the new struct
  * @age: second element of the struct
  * @owner: third element of the struct
  * Author: dahesey
  * Return: Null if function fails
  */

#include <string.h>
#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pointer;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	pointer = malloc(sizeof(dog_t));
	if (pointer == NULL)
		return (NULL);
	pointer->name = malloc(sizeof(char) * strlen(name) + 1);
	if (pointer->name == NULL)
	{
		free(pointer);
		return (NULL);
	}
	pointer->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (pointer->owner == NULL)
	{
		free(pointer->name);
		free(pointer);
		return (NULL);
	}
	pointer->age = age;
	strcpy(pointer->name, name);
	strcpy(pointer->owner, owner);
	return (pointer);
}
