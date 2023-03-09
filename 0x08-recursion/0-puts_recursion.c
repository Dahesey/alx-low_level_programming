#include "main.h"
/**
 * main - Entry point
 * _puts_recursion -  prints a string
 *
 *@s: string to be printed
 * Return: (0)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	_putchar('\n');
}
