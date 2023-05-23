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
	int q = 48;

	while (q < 58)
	{
		putchar(q);

		if (q != 57)
		{
			putchar(',');
			putchar(' ');
		}
		q++;
	}
	putchar('\n');
	return (0);
}
