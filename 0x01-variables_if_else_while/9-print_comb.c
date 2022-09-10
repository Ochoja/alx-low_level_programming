#include <stdio.h>
/**
 * main - main function
 * Return: 0 to terminate function
 */

int main(void)
{
	int number = 0;

	for (number = '0'; number <= '9' ; number++)
	{
		putchar(number);

		if (number != '9')
			putchar(',');

		if (number == '9')
			putchar('\n');
		else
			putchar(' ');
	}

	return (0);
}
