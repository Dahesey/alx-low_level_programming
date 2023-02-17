#include <stdio.h>

int main(void)
{
	int i;
	float f;
	double d;
	char c;

	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("Size of a double: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));

	return 0;
}
