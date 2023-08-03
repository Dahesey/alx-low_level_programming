/**
 * factorial - A function that finds the factorial of a number
 *
 * Author - Dahesey
 *
 * @n: integer to be checked
 *
 * Return: (-1) if n is lower than (0) to indicate an error (1) if n is (0)
 */

#include "main.h"
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
