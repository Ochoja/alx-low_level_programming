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

	for (i = 0; *(s + i) != '\0'; i++)
		length++;

	for (i = length; ; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
