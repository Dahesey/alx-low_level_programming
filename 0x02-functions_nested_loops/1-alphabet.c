/**
 * print_alphabet - Prints alphabets in lowercase
 *
 * Author - Dahesey
 *
 * Return: (0)
 */

#include "main.h"

void print_alphabet(void)
{
	int q = 97;

	while (q < 123)
	{
		_putchar(q);
		q++;
	}
	_putchar('\n');
}
