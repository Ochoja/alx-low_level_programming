#include "main.h"

/**
 * print_alphabet - function prints all alphabets
 * Return: Always 0
 */


void print_alphabet(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
