/**
 * _strdup - Returnes pointer to a new string which is a duplicate of str
 *
 * Author - Dahesey
 *
 * @str - string to be duplicated
 *
 * Return: A pointer
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	char *char_strcpy;
	unsigned int size = 0;
	unsigned int x;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		size++;
	char_strcpy = malloc(sizeof(char) * (size + 1));
	if (char_strcpy == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		char_strcpy[x] = str[x];
	char_strcpy[size] = '\0';
	return (char_strcpy);
}
