/**
 * print_name - Function that prints name
 *
 * Author - dahesey
 *
 * @name: first argument parameter
 *
 * @f: function pointer or pointer to a function
 */

#include <stdio.h>
#include "function_pointers.h"

void print_name(char *name, void (*f)(char *))
{
	if (name)
	{
		if (f != NULL)
			f(name);
	}
}
