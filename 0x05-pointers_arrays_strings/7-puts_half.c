/**
 * puts_half - prints half of a string
 *
 * Author - Dahesey
 *
 * @str: string to be printed
 *
 * Return: void
 */

#include "main.h"

void puts_half(char *str)
{
	int x = 0;

	for (; *str != '\0'; str++)
		x++;
	if (x % 2 != 0)
		x = (x - 1) / 2;
	else
		x /= 2;
	str -= x;
	for (; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
