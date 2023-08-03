/**
 * ch_match - checks if characters in a string are the same
 *
 * Author - Dahesey
 *
 * @s1: the string
 *
 * @s2: the string in reverse
 *
 * Return: 1 if the characters matches, else 0
 */
#include <string.h>
#include "main.h"
int ch_match(const char *s1, const char *s2)
{
	if (s1 < s2)
	{
		if (*s1 != *s2)
			return (0);
		else
			return (ch_match(s1 + 1, s2 - 1));
	}
	else
		return (1);
}

/**
 * is_palindrome - checks whether a string is a palindrome or not
 *
 * @s: the string
 *
 * Return: 1 if s is a palindrome, else 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	
	if (*s == '\0')
		return (1);
	else
		return (ch_match(s, s + (len - 1)));
}
