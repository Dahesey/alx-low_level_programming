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
	unsigned int d = 1;
	unsigned int t = n;
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		t = -t;
	}

	while (t / 10 != 0)
	{
		d *= 10;
		t /= 10;
	}
	while (d != 0)
	{
		int digit = num / d;

		_putchar('0' + digit);
		num %= d;
		d /= 10;
	}
}
