#include "main.h"
/**
 * _puts_recursion - print a string followed by a new line
 * Return: void
 */

void _puts_recursion(char *s)
{
	int n = 0;
	if (s[n] == '\0')
		return;
	else
	{
		_putchar(s[n]);
		_puts_recursion(s[n + 1]);
	}
}
