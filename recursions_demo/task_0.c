#include <stdio.h>
/**
 * main - entry point
 * nb: integer to be printed
 * Return: (0)
 */
void print(int nb)
{
	if (nb < 0)
	{
		return;
	}
	printf("%d", nb);
	nb--;
	print(nb);
}
int main(void)
{
	print(4);
	return (0);
}
