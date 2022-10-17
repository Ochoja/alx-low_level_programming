#include <stdio.h>

/**
 * printParam - modify and print integer
 * @a: a pointer to integer that would be modified
 * Return: void
 */
void printParam(int *a)
{
	*a = 402;
	printf("%d is the new value of x\n", *a);
}


/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
        int x = 5;
	int *ptr = &x;

	printf("%d is the value of 'x'\n", x);
	printParam(ptr);

	if (*ptr == x)
		printf("'x' has been modified\n");

	return 0;
}
