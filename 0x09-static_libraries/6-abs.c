/**
 * _abs - prints absolute integers
 *
 * Author - Dahesey
 *
 * @n: absolute integer to be printed
 *
 * Return: (n)
 */

#include "main.h"

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n);
}
