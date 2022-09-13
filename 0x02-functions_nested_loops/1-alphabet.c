#include "main.h"

/**
 * main - main function execution
 * print_alphabet - function prints all alphabets
 * Return: Always 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

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
