/**
 * main - A fuunction that prints to stdout
 *
 * Author - Dahesey
 *
 * @argc: Argument count
 *
 * @argv: Argument vector
 *
 * Return: (0)
 */

#include <stdio.h>
int main(int argc, char *argv[])
{
	int d;

	for (d = 0; d < argc; d++)
		printf("%s\n", argv[d]);
	return (0);
}
