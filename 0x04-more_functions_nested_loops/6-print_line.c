#include "main.h"
/**
 * print_line - draw n lines
 * @n : argument takes number of lines to be drawn
 * Return: void
 */

void print_line(int n)
{
	/*iterator*/
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}

	_putchar('\n');
}
