#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function block
 * Return: 0 to end program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0 || n % 10 == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else
	{
		printf("Last digit of %d is %d", n, n % 10);

		if (n % 10 > 5)
			printf(" and is greater than 5\n");

		if (n < 6 && n != 0)
			printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
