/**
 * main - Entry point
 *
 * Putchar - prints char and strings
 *
 * Author - Dahesey
 *
 * Return: (0)
 */

#include <stdio.h>
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
