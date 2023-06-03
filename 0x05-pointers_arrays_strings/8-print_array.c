/**
 * print_array - prints elements of an array of integers
 *
 * Author - Dahesey
 *
 * @a: integer pointer
 *
 * @n: number of array to be printed
 *
 * Return: void
 */

#include "main.h"

void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		printf("%d", a[x]);
		if (x == n - 1)
			x++;
		else
			printf(", ");
	}
	putchar('\n');
}
