#include <stdio.h>
/**
 * main - main function block
 * Return: 0 to terminate program
 */

int main(void)
{
	char small = 'a';
	char capital = 'A';

	/*print characters from a-z*/
	while (small <= 'z')
	{
		putchar(small);
		small++;
	}

	/*print characters from A-Z*/
	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}

	putchar('\n');

	return (0);
}
