/**
 * alloc_grid - returns a pointer to 2 dimentional arrya of integers
 *
 * Author - Dahesey
 *
 * @width: width of the array
 *
 * @height: height of array
 *
 * Return: integer pointer
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **a;
	int x;
	int y;
	int index;

	if (width <= 0 || height <= 0)
		return (0);
	a = (int **)malloc(sizeof(int *) * height);
	if (a == 0)
	{
		free(a);
		return (0);
	}
	for (index = 0; index < height; index++)
	{
		a[index] = malloc(sizeof(int) * width);
		if (a[index] == 0)
		{
			for (x = 0; x < index; x++)
			free(a[x]);
			free(a);
			return (0);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			a[x][y] = 0;
	}
	return (a);
}
