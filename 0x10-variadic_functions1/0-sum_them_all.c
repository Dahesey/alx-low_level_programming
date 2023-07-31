#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters in the function
 *
 * Author - Dahesey
 *
 * @n: preceeding arg before variable arguments & also length of args to sum
 *
 * Return: sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	unsigned int add_all = 0;
	va_list ptr_specs;

	if (!n)
		return (0);

	va_start(ptr_specs, n);

	for (x = 0; x < n; x++)
		add_all += va_arg(ptr_specs, int);

	va_end(ptr_specs);
	return (add_all);
}
