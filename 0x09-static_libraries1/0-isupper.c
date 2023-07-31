/**
 * _isupper - checks for upper case characters
 *
 * Author - Dahesey
 *
 * @c: Char to be checked
 *
 * Return: (1) if uppercase (0) if otherwise
 */

#include "main.h"

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
