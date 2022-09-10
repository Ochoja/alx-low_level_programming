#include <stdio.h>
/**
 * main - main function execution
 * Return: 0 to terminate function
 */

int main(void)
{
	int num = 0;
	char letter = 'a';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
