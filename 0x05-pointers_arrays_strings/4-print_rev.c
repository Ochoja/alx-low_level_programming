#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: pointer to string or char array
 */

void print_rev(char *s)
{
	/**counter variable**/
	int i = 0;

	while (s[i])
		i++;

	while (i != -1)
		_putchar(s[i]);

	_putchar('\n');
}
