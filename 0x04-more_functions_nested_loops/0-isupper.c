#include "main.h"

/**
 * print upper case - print only uppercase and end with new line
 *
 * _isupper checks whether or not a character is in uppercase
 *
 * @u:an integer representing ascii value of character
 *
 * Return: (1) if is uppercase and (0) if otherwise
 */

int _isupper(int u)
{
	if (u >= 65 && u <= 90)

		return (1);
	else
		return (0);
}
