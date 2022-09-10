#include <stdio.h>
/**
 * main - main function execution
 * Return: 0 to terminate program
 */

int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');

	return (0);
}
