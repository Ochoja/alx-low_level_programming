#include "main.h"

/**
 * _abs - compute absolute value of an integer
 * @n: int argument of _abs
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);

	return (n);
}
