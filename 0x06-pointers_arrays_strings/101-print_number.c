/**
 * print_number - prints a number using _putchar
 *
 * Author - Dahesey
 *
 * @n: number to print
 *
 * Return: void
 */

#include "main.h"

void print_number(int n)
{
	int d = 1;
	int t = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (t / 10 != 0)
	{
		d *= 10;
		t /= 10;
	}
	while (d != 0)
	{
		int digit = n / d;

		_putchar('0' + digit);
		n %= d;
		d /= 10;
	}
}
