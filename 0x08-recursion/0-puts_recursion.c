/**
 * puts_recursion - A function that callss itself to print a string
 *
 * Author - dahesey
 *
 * @s: char string to be printed
 */

#include "main.h"
void _puts_recursion(char *s)
{
	char *p = s;

	if (*p)
	{
		_putchar(*p);
		_puts_recursion(p + 1);
	}
	else
		_putchar('\n');
}
