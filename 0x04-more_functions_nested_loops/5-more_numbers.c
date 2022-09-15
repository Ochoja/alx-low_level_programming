#include "main.h"
/**
 * more_numbers - print 0-14 ten times
 * Return: void
 */

void more_numbers(void)
{
	/*iterator variables*/
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = '0'; j <= '14'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}
}
