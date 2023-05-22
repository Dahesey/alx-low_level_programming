/**
 * main - Entry point
 *
 * putchar - prints strings and char
 *
 * Author - Dahesey
 *
 * Return: (0)
 */

#include <stdio.h>
int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}

	putchar('\n');

	return (0);
}
