/**
 * _isalpha - checks for alphabetical char
 *
 * Author - Dahesey
 *
 * @c: char to be printed
 *
 * Return: (1) if success (0) if otherwise
 */

#include "main.h"

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
