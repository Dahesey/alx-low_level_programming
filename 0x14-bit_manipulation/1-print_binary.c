/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */

#include "main.h"
void print_binary(unsigned long int n)
{
	unsigned long int hold;
	int loop;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (hold = n, loop = 0; (hold >>= 1) > 0; loop++)
		;

	for (; loop >= 0; loop--)
	{
		if ((n >> loop) & 1)
			printf("1");
		else
			printf("0");
	}
}
