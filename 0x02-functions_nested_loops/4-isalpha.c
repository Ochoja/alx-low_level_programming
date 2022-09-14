#include "main.h"
/**
 * _isalpha - chech for alphabetic character
 * @c: _isalpha argument that is checked
 * Return: 1 if argument is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
