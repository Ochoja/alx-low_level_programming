#include "main.h"
/**
 * puts2- print every other character in a string
 * @str: string pointer
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || i % 2 == 1)
			_putchar(str[i]);
	}

	_putchar('\n');
}
