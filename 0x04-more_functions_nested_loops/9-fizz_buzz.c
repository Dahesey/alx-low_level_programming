/**
 * main - Entry point
 *
 * Author - Dahesey
 *
 * Return: (0)
 */

#include <stdio.h>

int main(void)
{
	int f = 2;
	int x = 1;

	printf("%d", x);

	while (f <= 100)
	{
		if (f % 3 == 0 && f % 5 == 0)
		{
			printf(" FizzBuzz");
		}

		else if (f % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (f % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d",f);
		}
		f++;
	}
	printf("\n");

	return (0);
}
