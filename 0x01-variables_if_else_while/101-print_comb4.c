/**
 * main - Entry point
 *
 * putchar - prints char and string
 *
 * Author - Dahesey
 *
 * Return: (0)
 */

#include <stdio.h>

int main(void)
{
	int x = 48;
	int y = 48;
	int z = 48;

	while (x < 58)
	{
		y = 48;
		while (y < 58)
		{
			z = 48;
			while (z < 58)
			{
				if (x != 56 && x < 57)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (y != 56 && x < 57)
					{
						putchar(x);
						putchar(y);
						putchar(z);
						if (!(x == 55 && y == 56 && z == 57))
						{
							putchar(',');
							putchar(' ');
						}
					}
					z++;
				}
				y++;
			}
		}
		x++;
	}
	putchar('\n');
	return (0);
}
