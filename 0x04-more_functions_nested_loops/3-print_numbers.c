#include "main.h"

/**
 * print_numbers - print numbers from 0-9
 * Return: void
 */

void print_numbers(void)
{
	/*iterator variable*/
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
