#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: pointer to string or char array
 */

void print_rev(char *s)
{
	/**holds length of string**/
	int length = 0;

	/**counter variable**/
	int i;

	char c;

	for (i = 0; *(s + i) != '\0'; i++)
		length++;

	for (i = length; i > -1; i--)
	{
		c = *(s + i);
		_putchar(c);
	}

	_putchar('\n');
}
