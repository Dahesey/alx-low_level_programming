/**
 * main - Prints largest prime factor
 *
 * Author - Dahesey
 *
 * larg: largest prime number to be returned
 *
 * Return: (0)
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;
	long int larg = -1;
	long int n = 612852475143;

	while (n % 2 == 0)
	{
		larg = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			larg = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		larg = n;
	}
	printf("%ld\n", larg);
	return (larg);
}
