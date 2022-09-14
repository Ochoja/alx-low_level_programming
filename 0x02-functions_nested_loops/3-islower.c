#include "main.h"
/**
 * _islower(int c) - check for lower letter
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
