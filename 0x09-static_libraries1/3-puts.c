/**
 * _puts - prints a string to stdout
 *
 * Author - Dahesey
 *
 * @str: string to be printed
 *
 * Return: void
 */

#include "main.h"

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
