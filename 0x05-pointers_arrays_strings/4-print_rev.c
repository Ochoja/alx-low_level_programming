#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: pointer to string or char array
 */

void print_rev(char *s)
{
	/**holds length of string**/
	int length;

	/**counter variable**/
	int i;

	char c;

	for (i = 0; *(s + i) != '\0'; i++)
		length++;

	for (i = length; i >= 0; i--)
	{
		c = *(s + i);
		_putchar(c);
	}

	_putchar('\n');
}
