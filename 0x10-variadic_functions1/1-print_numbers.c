#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 *
 * Author - Dahesey
 *
 * @separator: string to be printed between numbers
 *
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list list_of_numbers;

	va_start(list_of_numbers, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(list_of_numbers, int));
		if (x < (n - 1) && separator)
			printf("%s", separator);
	}
	va_end(list_of_numbers);
	printf("\n");
}
