#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 without using standard functions
 *
 *
 * Return: void
 */
void print_numbers(void)
{
	int b = 48;
	
	while (b < 58)
	{
		_putchar(b);
		b++;
	}
	_putchar('\n');
}
