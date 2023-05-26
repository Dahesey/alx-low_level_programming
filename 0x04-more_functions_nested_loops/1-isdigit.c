/**
 * _isdigit - checks for digits from 0 through to 9
 *
 * @c: char to be checked
 *
 * Author - Dahesey
 *
 * Return: (1) if a digit (0) if otherwise
 */

#include "main.h"

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
