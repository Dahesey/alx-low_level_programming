/**
 * main - function that prints to stdout
 *
 * Author - dahesey
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: (0) on success (1) on error
 */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	long int mul = 1;
	int d;

	if (argc > 3)
	{
		printf("Error\n");
		return (0);
	}
	if (argc >= 2)
	{
		for (d = 1; d < argc; d++)
		{
			mul *= atoi(argv[d]);
		}
		printf("%ld\n", mul);
	}
	return (0);
}
