/**
 * print_rev - print string in reverse
 *
 * Author - Dahesey
 *
 * @s: string to be printed
 *
 * Return: void
 */

#include "main.h"

void print_rev(char *s)
{
	int length  = 0;

	while (s[length] != '\0')
	{
		length++;		
	}
	length--;

	while (length >= 0)
	{	
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
