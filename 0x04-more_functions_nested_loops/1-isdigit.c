#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: function argument
 * Return: return 1 if argument is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	/*iterator*/
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
