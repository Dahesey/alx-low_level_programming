/**
  * print_name - A function to print a name
  * Author - Dahesey
  * @f: Function pointer
  *@name: Function parameter
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
