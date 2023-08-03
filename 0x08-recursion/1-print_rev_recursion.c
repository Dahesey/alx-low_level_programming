/**
 * _print_rev_recursion - A function to print a string using recursion
 *
 * Author - Dahesey
 *
 * @s: char string to be printed
 */

#include "main.h"
void _print_rev_recursion(char *s)
{
	char *p = s;

	if (*p != '\0')
	{
		_print_rev_recursion(p + 1);
		_putchar(*p);
	}
}
