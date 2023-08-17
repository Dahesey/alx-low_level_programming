/**
 * array_iterator - Execute a function givena s a parameter
 * on each element of an array
 * Author -  Dahesey
 * @array: Array
 * @size: size of array
 * @action: Pointer to function
 */

#include <stdio.h>
#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;
	if (size > 0 && action)
		for (i = 0; i < size; i++)
			(*action)(array[i]);
}
