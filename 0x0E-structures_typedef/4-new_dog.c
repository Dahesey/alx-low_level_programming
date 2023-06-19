/**
 * new_dog - A function to create a new dog
 *
 * Author - Dahesey
 *
 * @name: first element of structure
 *
 * @age: second element of structure
 *
 * @owner: third element of structure
 *
 * Return: Null if function fails
 */

#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_pointer;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog_pointer = malloc(sizeof(dog_t));
	if (dog_pointer == NULL)
		return (NULL);

	dog_pointer->name = malloc(sizeof(char) * strlen(name) + 1);
	if (dog_pointer->name == NULL)
	{
		free(dog_pointer);
		return (NULL);
	}

	dog_pointer->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (dog_pointer->owner == NULL)
	{

		free(dog_pointer->name);
		free(dog_pointer);
		return (NULL);
	}

	strcpy(dog_pointer->name, name);
	strcpy(dog_pointer->owner, owner);
	dog_pointer->age = age;
	return (dog_pointer);
}

