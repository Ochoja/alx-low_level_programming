#include <stdio.h>
/**
 * main - main function execution
 * Return: 0 terminate program
 */

int main(void)
{
	int number = 0;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}

	putchar('\n');

	return (0);
}
