#include "main.h"

/**
 * _isdigit checks for digits
 *
 * @c: is an integer that represents an ascii character value
 *
 * Return: 1 if it is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if  ( c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
