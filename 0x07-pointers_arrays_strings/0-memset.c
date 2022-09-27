#include "main.h"
/**
 * _memset - fill first n bytes of memory
 * @s: pointer to string
 * @b: character that fills n memory locations
 * @n: holds number of memory locations to be filled
 * Return: pointer to memory location 
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; i <= n; i++)
		s[i] = b;

	return (s);
}
