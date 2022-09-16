#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: argument determines size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;
	int space = size;

	if (size <= 0)
		_putchar('\n');
	else if (size == 1)
	{
		_putchar('#');
		_putchar('\n');
	}

	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = space; j > i; j--)
				_putchar(' ');

			for (k = 1; k <= i; k++)
				_putchar('#');

			_putchar('\n');

			if (i == space)
				space--;
		}
	}
}
