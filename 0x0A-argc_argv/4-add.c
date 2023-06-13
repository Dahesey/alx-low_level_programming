/**
 * main - function to print to stdout
 *
 * Author - Dahesey
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
	int d;
	int i;
	long int sum = 0;

	if (argc == 1)
		printf("0\n");
	for (d = 1; d < argc; d++)
		for (i = 0; argv[d][i] != '\0'; i++)
		{
			if (!((argv[d][i] >= '0' && argv[d][i] <= '9') || argv[d][i] == '-'))
			{
				printf("Error\n");
				return (1);
			}
		}

	if (argc > 1)
	{
		for (d = 0; d < argc; d++)
		sum += atoi(argv[d]);
		printf("%ld\n", sum);
	}
	return (0);
}
