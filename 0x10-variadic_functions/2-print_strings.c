#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings
 *
 * Author - Dahesey
 *
 * @separator: string to be printed between the strings
 *
 * @n: number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list list_of_string;

	va_start(list_of_string, n);
	for (x = 0; x < n; x++)
	{
		char *ptr_string = va_arg(list_of_string, char *);

		if (ptr_string)
			printf("%s", ptr_string);
		else
			printf("(nil)");
		if (x < (n - 1) && separator)
			printf("%s", separator);
	}
	va_end(list_of_string);
	printf("\n");
}
