#include "main.h"
/**
 * _islower - check for lower letter
 *
 * @c: argument for function _islower
 *
 * Return: 1 if true, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
