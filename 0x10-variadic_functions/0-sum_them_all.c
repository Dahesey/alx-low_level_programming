/**
  * sum_them_all - A function that sums upall its parameters
  * Author - Dahesey
  * @n: Unsigned constant
  *Return: 0 if n == 0
  */

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
int sum_them_all(const unsigned int n, ...)
{
	va_list param;
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
		return (0);
	va_start(param, n);
	for (i = 0; i < n; i++)
		sum += va_arg(param, int);
	va_end(param);
	return (sum);
}
