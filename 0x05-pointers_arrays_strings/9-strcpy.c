/**
 * _strcpy - copies a string
 *
 * @dest: pointer to a buffer
 *
 * Author - dahesey
 *
 * @src: pointer to a string
 *
 * Return: dest(The pointer)
 */

#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int length = 0, x = 0;

	while (*(src + length) != '\0')
		length++;
	for (; x <= length; x++)
		dest[x] = *(src + x);
	return (dest);
}
