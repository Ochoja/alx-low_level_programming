#include "main.h"
/**
 * _puts - print a string followed by a new line
 * @str: character pointer (pointer to either char or char array)
 */

void _puts(char *str)
{
	int i;
	char c;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		c = *(str + i);
		_putchar(c);
	}

	_putchar('\n');
}
