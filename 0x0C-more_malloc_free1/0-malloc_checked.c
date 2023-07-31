/**
 * malloc_checked allocates memory using malloc
 *
 * Author - Dahesey
 *
 * Return: a pointer to the allocated memory
 *
 * Exit: 98
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *string;

	string = malloc(b);
	if (string == NULL)
		exit(98);
	return (string);
}
