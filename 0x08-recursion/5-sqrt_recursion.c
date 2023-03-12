#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a given number
 *
 * @n: number to be squared
 *
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	int sq = 2;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (is_sqrt(n, sq));
}

/**
 * is_sqrt - function to check if n is a natural square root or not
 *
 * @n: number
 *
 * @sq: test number
 *
 * Return: int
 */
int find_sqrt(int n, int sq)
{
	if (sq * sq == n)
		return (sq);
	else if (sq * sq < n)
		return (is_sqrt(n, sq + 1));
	else if (sq * sq > n)
		return (-1);
	return (-1);
}
