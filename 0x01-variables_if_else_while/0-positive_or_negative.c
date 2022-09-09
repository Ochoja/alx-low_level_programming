#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - contains main function
 * Return: 0 to end program
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%d is positive\n", n);

if (n == 0)
printf("%d is zero\n", n);

if (n < 0)
printf("%d is negative\n", n);
return (0);
}
