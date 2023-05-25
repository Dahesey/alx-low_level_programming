/**
 * jack_bauer - prints every minuite of the day starting from 00:00 to 23:59
 *
 * Author - Dahesey
 */

#include "main.h"

void jack_bauer(void)
{
	int t;
	int h = 0, m = 0, s = 0, ms = 0;

	while (t < 1440)
	{
		_putchar(h + '0');
		_putchar(m + '0');
		_putchar(':');
		_putchar(s + '0');
		_putchar(ms + '0');
		_putchar('\n');

		ms++;
		if (ms > 9)
		{
			ms = 0;
			s++;
		}
		if (s > 5)
		{
			s = 0;
			m++;
		}
		if (m > 9)
		{
			m = 0;
			h++;
		}
		t++;
	}
}
