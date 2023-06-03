/**
 * rev_string - Reverses string
 *
 * Author - Dahesey
 *
 * @s: String to be reversed
 *
 * Return: void
 */

#include "main.h"

void rev_string(char *s)
{
	int x = 0;
	int y = 0;
	char *p = s;

	for (; *s != '\0'; s++)
		x++;
	for (; y < x / 2; y++)
	{
		char keep;

		keep = *--s;
		*s = *p;
		*p++ = keep;
	}
}
