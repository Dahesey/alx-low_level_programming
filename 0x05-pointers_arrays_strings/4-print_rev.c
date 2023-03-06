#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 *
 * @s: string to be printed
 *
 * Return: 0 (Success)
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	while (x >= 0)
	{
		putchar(s[x]);
		x--;
	}
	return (void);
}
