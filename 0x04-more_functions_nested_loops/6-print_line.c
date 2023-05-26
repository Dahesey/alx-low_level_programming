/**
 * print_line - prints a line on the terminal using the underscore sign
 *
 * Author - Dahesey
 *
 * @n: character to be printed
 */

#include "main.h"

void print_line(int n)
{
	int p = 0;

	if (n > 0)
	{
		while (p < n)
		{
			_putchar(95);
			p++;
		}
	}
	_putchar('\n');
}
