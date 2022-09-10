#include <stdio.h>
/**
 * main - main function
 * Description: Program prints all possible combination
 * of two numbers
 * Return: 0 to terminate
 */

int main(void)
{
	/*counter and number variables*/
	int i;
	int j;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = i + 1 ; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);

			if (i == '8' && j == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
