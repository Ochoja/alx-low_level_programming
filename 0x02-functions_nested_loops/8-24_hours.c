#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int hour1 = 0;
	int hour2 = 0;
	int minute1 0;
	int minute2 0;

	while(1)
	{
		_putchar(hour1 + '0');
		_putchar(hour2 + '0');
		_putchar(':');
		_putchar(minute1 + '0');
		_putchar(minute2 + '0');

		if (hour1 == 2 && hour2 == 3 && minute1 == 5 && minute2 == 9)
			break;

		hour1++;
		hour2++;
		hour3++;
	        hour4++;
	}
}
