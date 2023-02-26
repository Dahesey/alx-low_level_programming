#include "main.h"

/**
 * check lower case - check for lower case
 *
 *  _islower checks for lower case in characters
 *
 * @c: is an integer representing ascii value of character
 *
 * Return: 1 if lower or 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 96 && c <= 123)
	{
		return (1);
	}
	else
	{
return (0);
	}
}
