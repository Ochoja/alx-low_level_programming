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

	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}

}
