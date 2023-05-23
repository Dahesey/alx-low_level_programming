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
	int p = 48;

	while (q < 58)
	{
		p = 48;
		while (p < 58)
		{
			if (q != p && q < p)
			{
				putchar(q);
				putchar(p);
				if (!(q == 56 && p == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
			p++;
		}
		q++;
	}
	putchar('\n');
	return (0);
}
