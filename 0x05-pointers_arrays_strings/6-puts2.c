/**
 * puts2 - prints every other character of a string
 *
 * Author - Dahesey
 *
 * @str: string to be printed
 *
 * Return: void
 */

#include "main.h"

void puts2(char *str)
{
	int x;
	int length = 0;
	char *p = str;

	while (*p != '\0')
	{
		length++;
		p++;
	}
	for (x = 0; x < length; x +=2)
		_putchar(str[x]);
	_putchar('\n');
}
