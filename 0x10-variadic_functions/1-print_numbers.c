/**
  * print_numbers - A function that prints numbers
  * Author - Dahesey
  * @separator: A string that separates the numbers to be printed
  * @n: last mandatory integer
  */
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list numbs;

	va_start(numbs, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(numbs, int));
		if (a < (n - 1) && separator)
			printf("%s", separator);
	}
	va_end(numbs);
	printf("\n");
}
