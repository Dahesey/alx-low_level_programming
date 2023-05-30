/**
 * swap_int - swaps integers
 *
 * Author - Dahesey
 *
 * @a: first int
 *
 * @b: second int
 *
 * Return: void
 */

#include "main.h"

void swap_int(int *a, int *b)
{
	int y = 0;

	y = *a;
	*a = *b;
	*b = y;
}
