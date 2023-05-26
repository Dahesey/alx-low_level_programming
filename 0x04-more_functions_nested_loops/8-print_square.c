/**
 * print_square - prints squares using hash sign
 *
 * Author - Dahesey
 *
 * @size: size of the square
 */

#include "main.h"

void print_square(int size)
{
	int sq = 0, y;

	if (size > 0)
	{
		while (sq < size)
		{
			y = 0;
			while (y < size)
			{
				_putchar(35);
				y++;
			}
			_putchar('\n');
			sq++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
