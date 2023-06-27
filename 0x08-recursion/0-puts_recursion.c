/**
 * _puts_recursion - Function that prints a  string
 *
 * Author - Dahesey
 *
 * @s: char
 */
#include "main.h"
void _puts_recursion(char *s)
{
	char *y = s;

	if (*y)
	{
		_putchar(*y);
		_puts_recursion(y + 1);
	}
	else
		_putchar('\n');
}
