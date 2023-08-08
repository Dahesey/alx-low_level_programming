/**
 * create_array - A funtion to create an arra of chars
 * @size: size of array
 * @c: char array to be initialized
 * Return: (NULL) if fails and a pointer on success
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *char_array;
	unsigned int x;

	if (size == 0)
		return (NULL);

	char_array = malloc(size * sizeof(char));
	if (char_array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		char_array[x] = c;
	return (char_array);
}
