/**
 * more_numbers - prints digits from 0-14
 *
 * Author - dahesey
 *
 */

#include "main.h"

void more_numbers(void)
{
	int m = 0, n, p;

	while (m < 10)
	{
		n = 0;
		while (n < 15)
		{
			p = n;
			if (n > 9)
			{
				p = n / 10;
			}
			_putchar('0' + p);
			if (n > 9)
			{
				_putchar('0' + n % 10);
			}
			n++;
		}
		_putchar('\n');
		m++;
	}
}

