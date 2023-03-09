#include "main.h"

/**
 * _pow_recursion - returns x raised to the power y
 *
 * @x: number to be raised
 *
 * @y: the power x will be raised to
 *
 * Return: x raised to the power y
 */
int _pow_recursion(int x, int y)
{
	int res;

	res = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	res *= _pow_recursion(x, y - 1);

	return (res);
}
