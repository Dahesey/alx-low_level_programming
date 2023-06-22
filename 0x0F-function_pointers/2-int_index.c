/**
 * int_index - A function that searches foro integers
 *
 * Author - Dahesey
 *
 * @size: Size of array
 *
 * @array: array pointer
 *
 * @cmp: pointer to function
 *
 * Return: (-1) if NULL 
 */

#include <stdio.h>
#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL && size <= 0)
		return (-1);
	if (cmp)
		for (x = 0; x < size; x++)
		{
			if ((cmp)(array[x]))
				return (x);
		}
	return (-1);
}
