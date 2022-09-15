#include "main.h"

/**
 * print_diagonal - prints diagonal lines n times
 * @n: argument
 * Return: void
 */

void print_diagonal(int n)
{
	/**iterators**/
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
