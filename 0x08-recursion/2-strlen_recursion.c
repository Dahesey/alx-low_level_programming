/**
 * _strlen_recursion - A function that returns length of string
 *
 * Author - Dahesey
 *
 * @s: char string to be printed
 *
 * Return: length of string
 */

#include "main.h"
int _strlen_recursion(char *s)
{
	char *p = s;

	if (!*p)
		return (0);
	else
		return (1 + _strlen_recursion(p + 1));
}
