/**
 * main - Entry point
 *
 * _putchar - prints char and strings
 *
 * Author - Dahesey
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
