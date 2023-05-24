/**
 * print_last_digit - print last digit of given number
 *
 * Author - Dahesey
 *
 * @y: last digit integer to be printer
 *
 * Return: (y)
 */

#include "main.h"

int print_last_digit(int y)
{
	int ld;

	if (y < 0)
	{
		ld = -1 * (y % 10);
		_putchar(ld + 48);
		return (ld);
	}
	else
	{
		ld = y % 10;
		_putchar(ld + 48);
		return (ld);
	}
}
