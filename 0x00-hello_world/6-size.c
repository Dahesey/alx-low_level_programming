#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int f;
	long long int d;
	char c;
	float h;

	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(h));

	return (0);
}
