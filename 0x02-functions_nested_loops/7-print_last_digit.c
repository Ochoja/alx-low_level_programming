#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: argument variable
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit *= -1;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
