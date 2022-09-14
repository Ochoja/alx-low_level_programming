#include "main.h"
/**
 * print_sign - print sign of a number
 * @n: argument for print_sign function
 * Return: 1 if argument is positive, 0
 * if argument is equal to 0, -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (-1);
}
