/**
 * print_alphabet_x10 - prints alphabets on 10 lines
 *
 * Author - Dahesey
 *
 * Return: (0)
 */

#include "main.h"

void print_alphabet_x10(void)
{
	int d = 0;
	int r;

	while (d < 11)
	{
		r = 97;
		while (r < 123 && d < 10)
		{
			_putchar(r);
			r++;
		}
		_putchar('\n');
		d++;
	}
}
