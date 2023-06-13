/**
 * main - function that prints to stdout
 *
 * Author - dahesey
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: (0)
 */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	long int mul = 1;
	int d;

	if (argc > 1)
	{
		for (d = 1; d < argc; d++)
		{
			mul *= atoi(argv[d]);
		}
		printf("%ld\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}
