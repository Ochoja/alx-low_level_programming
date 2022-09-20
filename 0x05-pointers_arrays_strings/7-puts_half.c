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

       	for (i = total / 2; i < total; i++)
       		_putchar(str[i]);


	_putchar('\n');
}
