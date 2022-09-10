#include <stdio.h>
/**
 * main - main function
 * Return: 0 to terminate function
 */

int main(void)
{
	int number = 0;

	/*print numbers from 0-9*/
	while (number <= 9)
	{
		printf("%d", number);
		number++;
	}

	printf("\n");

	return (0);
}
