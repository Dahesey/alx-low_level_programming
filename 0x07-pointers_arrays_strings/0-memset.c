#include "main.h"

/**
 * _memset - fills memory area
 * @s: pointer to character
 * @b: data to be changed
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		s[q] = b;
	}
	return (s);
}
