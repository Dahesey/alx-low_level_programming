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
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		{
			if (i != 57)
			putchar(',');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
