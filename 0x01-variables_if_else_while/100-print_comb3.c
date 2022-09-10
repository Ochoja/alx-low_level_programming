#include <stdio.h>
/**
 * main - main function
 * Return: 0 to terminate
 */

int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = i+1 ; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
