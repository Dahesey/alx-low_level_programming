/**
 * _pow_recursion - A function to find a number raised to the power
 *
 * Author - Dahesey
 *
 * @x: integer constant
 *
 * @y: integer to be raised
 *
 * Return: (-1) if y is less than 0.
 */

#include "main.h"
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
