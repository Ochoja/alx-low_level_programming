#include "main.h"
/**
 * puts_half - print half of a string
 * @str: pointer to string
 */

void puts_half(char *str)
{
	int total = 0;
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		total++;

	if (total % 2 == 0)
		total = total / 2;
	else
		total = ((total - 1) / 2) + 1;

	for (i = total; str[i] != '\0'; i++)
		_putchar(str[i]);


	_putchar('\n');
}
