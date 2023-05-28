/**
 * print_triangle - prints triangle using the hash sign
 *
 * @size: size of triangle to be printed
 *
 * author - Dahesey
 *
 * _putchar - prints characters
 *
 * Return: (0)
 */

#include "main.h"

void print_triangle(int size)
{
	int v = 1;
	int x = 0;

	if (size > 0)
	{
		if (size == 1)
		{
			_putchar(35);
			_putchar('\n');
		}
		else
		{
			while (v <= size)
			{	x = 0;
				while (x < size - v)
				{
					_putchar(' ');
					x++;
				}
				x = 0;
				while (x < v)
				{
					_putchar(35);
					x++;
				}
				_putchar('\n');
				v++;
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
