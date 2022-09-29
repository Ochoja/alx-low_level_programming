#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string argument
 */

void _print_rev_recursion(char *s)
{
	int n = 0;

	if (s[n] == "")
		return;


	if (s[n + 1] != '\0')
		_print_rev_recursion(&s[n + 1]);

	_putchar(s[n]);
}
