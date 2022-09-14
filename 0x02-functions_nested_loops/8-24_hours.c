#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int hour1;
	int hour2;
	int minute1;

	for (hour1 = 0; hour1 <= 2; hour1++)
	{
		_putchar(hour1 + '0');

		for (hour2 = 0; hour2 <= 3; hour2++)
		{
			_putchar(hour2 + '0');
			_putchar(':');

			for (minute1 = 0; minute1 <= 5; minute1++)
			{
				_putchar(minute1 + '0');
			}
		}

		_putchar('\n');
	}
}
