#include "main.h"
#include <stdio.h>
/**
 * main- find and print largest prime factor of 612852475143
 * Return: Always 0;
 */


int main(void)
{
	long int number = 612852475143;
	long int primeFactor = 2;

	/*counter variable*/
	long i,j;

	for (i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			for (j = 2; j <= i; j++)
			{
				if (i % j == 0 && i <  j)
					break;
				else if (j == i)
					primeFactor = j;
			}
		}
	}

	printf("%ld\n", primeFactor);

	return (0);
}
