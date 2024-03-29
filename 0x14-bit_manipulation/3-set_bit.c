/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: decimal number passed by pointer
 * @index: index position to change, starting from 0
 * Return: 1 if it worked, -1 if error
 */

#include "main.h"
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index > 64)
		return (-1);

	for (b = 1; index > 0; index--, b *= 2)
		;
	*n += b;

	return (1);
}
