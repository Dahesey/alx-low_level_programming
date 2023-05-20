/**
 * main - Entry point
 *
 * printf - prints strings and integers
 *
 * Author - Dahesey
 *
 * Return: (0)
 */

#include <stdio.h>

int main(void)
{
	int i;
	char c;
	float f;
	long int li;
	long long int lli;

	printf("size of an int: %lu byte(s)\n", sizeof(i));
	printf("size of a char: %lu byte(s)\n", sizeof(c));
	printf("size of a float: %lu byte(s)\n", sizeof(f));
	printf("size of a long int: %lu byte(s)\n", sizeof(li));
	printf("size of a long long int: %lu byte(s)\n", sizeof(lli));

	return (0);
}
