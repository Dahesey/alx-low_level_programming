#include "main.h"

/**
 * factorial - returns the factorial of a number
 *
 * @n: number to be printed
 *
 * Return: -1 if n < 0 and factorial of n if n > 0. factorial 0 is 1
 */
int factorial(int n)
{
	int res;
	
	res = n;
	
	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}

	res *= factorial(n - 1);
	return (res);
}
