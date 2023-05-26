/**
 * print_numbers - prints digits from 0-9
 *
 * Author - Dahesey
 *
 * Return: (0)
 */

#include "main.h"

void print_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
