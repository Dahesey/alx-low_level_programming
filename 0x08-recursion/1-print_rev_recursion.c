#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to be printed
 */
void _print_rev_recursion(char *s)
{
	char *y = s;

	if (*y != '\0')
		_print_rev_recursion(y + 1);
	if (*y != '\0')
		_putchar(*y);
}
