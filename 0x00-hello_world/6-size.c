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

	printf("size of int: %lu\n", sizeof(i));
	printf("size of char: %lu\n", sizeof(c));
	printf("size of float: %lu\n", sizeof(f));
	printf("size of long int: %lu\n", sizeof(li));
	printf("size of long long int %lu\n", sizeof(lli));

	return (0);
}
