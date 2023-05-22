/**
 * main - Entry point
 *
 * putchar - print strings and char
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
		if (x != 'q' && x != 'e')
			putchar(x);
		x++;
	}

	putchar('\n');

	return (0);
}
