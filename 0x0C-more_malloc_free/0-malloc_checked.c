/**
 * *malloc_checked - A function to allocate memory
 * @b: Size of array pointer
 * Return: A void pointer on success, exit(98) on fail
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
