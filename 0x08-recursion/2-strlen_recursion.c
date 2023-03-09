#include "main.h"

/**
 * _strlen_recursion - prints length of string
 *
 * @s: string to be printed
 *
 * @len - length of string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int l;

	l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
