/**
  * error - A function to print error messages and exit
  * @status: Exit code
  */
#include "main.h"

void error(int status, const char *format, ...)
{
	va_list a;

	va_start(a, format);
	if (status == 97)
		dprintf(STDOUT_FILENO, %s, format);
	else if(status == 100)
		dprintf(STDOUT_FILENO, format, va_arg(a, int));
	else
		dprintf(STDOUT_FILENO, format, va_arg(a, char *));
	va_end(a);
	exit(status);
}
