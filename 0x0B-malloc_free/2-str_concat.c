/**
 * str_concat - Function to concatenate 2 string
 *
 * Author - Dahesey
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: A pointer
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	char *char_pointer;
	unsigned int x;
	unsigned int y;
	unsigned int size = 0;

	if (s1 != NULL)
		for (x = 0; s1[x] != '\0'; x++)
			size++;
	if (s2 != NULL)
		for (x = 0; s2[x] != '\0'; x++)
			size++;
	char_pointer = malloc(sizeof(char) * (size + 1));
	if (char_pointer == NULL)
		return (NULL);
	if (s1 == NULL && s2 == NULL)
	{
		char_pointer[0] = '\0';
		return (char_pointer);
	}
	if (s1 != NULL)
		for (x = 0; s1[x] != '\0'; x++)
			char_pointer[x] = s1[x];
	if (s1 == NULL)
		x = 0;
	if (s2 != NULL)
		for (y = 0; s2[y] != '\0'; y++)
		{
			char_pointer[x] = s2[y];
			x++;
		}
	char_pointer[size] = '\0';
	return (char_pointer);
}
