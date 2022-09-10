#include <stdio.h>
/**
 * main - main function
 * Return: 0 to terminate function
 */

int main(void)
{
	/*loop variables*/
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; i++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
