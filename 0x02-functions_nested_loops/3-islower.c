/**
 * _islower - checks lowercase alphabets
 *
 * Author - Dahesey
 *
 * Return: (1) if success (0) otherwise
 */

#include "main.h"

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
