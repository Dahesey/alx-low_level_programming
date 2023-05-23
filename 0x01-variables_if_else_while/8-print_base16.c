/**
 * main - Entry point
 *
 * putchar - prints char and strings
 *
 * Author - Dahesey
 *
 * Return: (0)
 */

#include <stdio.h>

int main(void)
{
	int c = 'a';
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
