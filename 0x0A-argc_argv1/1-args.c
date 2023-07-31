/**
 * main - Function tha prints to stdout
 *
 * Author - Dahesey
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: (0)
 */

#include <stdio.h>
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
