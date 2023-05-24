/**
 * print_sign - prints signs
 *
 * Author - Dahesey
 *
 * @n: integer to be printed
 *
 * Return: (1) if success (0) if 0 and (-1) if negative
 */

#include "main.h"

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (1);
}
