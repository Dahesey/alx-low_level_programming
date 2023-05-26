/**
 * print_diagonal - prints a diagonal line using the slash sign
 *
 * Author - Dahesey
 *
 * @n: character to be printed
 */

#include "main.h"

void print_diagonal(int n)
{
	int i = 1;

	if (n > 0)
	{
		_putchar(92);

		while (i < n)
		{
			int c = 0;

			_putchar('\n');
			while (c < i)
			{
				_putchar(' ');
				c++;
			}
			_putchar(92);
			i++;
		}
	}
	_putchar('\n');
}
