/**
 * print_most_numbers - prints integers
 *
 * Author - Dahesey
 *
 */

#include "main.h"

void print_most_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		if (!(c == 50 || c == 52))
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
