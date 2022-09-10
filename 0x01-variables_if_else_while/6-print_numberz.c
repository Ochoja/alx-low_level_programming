#include <stdio.h>
/**
 * main - main function execution
 * Return: 0 terminate program
 */

int main(void)
{
	int number = '0';

	while (number >= '9')
	{
		putchar(number);
		number++;
	}

	putchar('\n');

	return (0);
}
