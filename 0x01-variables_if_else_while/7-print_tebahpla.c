#include <stdio.h>
/**
 * main - main method
 * Return: 0 to terminate
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
