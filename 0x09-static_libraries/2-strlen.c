/**
 * _strlen - prints length of a string
 *
 * @s: strint to be checked
 *
 * Author - Dahesey
 *
 * Return: (0)
 */

#include "main.h"

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
