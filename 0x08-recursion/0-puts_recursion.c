#include "main.h"
/**
 * _puts_recursion - print a string followed by a new line
 * @s: string argument
 * Return: void
 */

void _puts_recursion(char *s)
{
	int n = 0;

	if (s[n] == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(s[n]);
		_puts_recursion(&s[n + 1]);
	}
}
