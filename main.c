#include <stdio.h>

int main(void)
{
	int a[3];

	*a = 8;
	*(a + 1) = 10;
	*(a + 2) = 12;

	printf("*a : %d\n", *a);
	printf("*(a + 1) : %d\n", *(a + 1));
	printf("*(a + 2) : %d\n", *(a + 2));

	printf("---------------\n");
	printf("Value of a : %d\n", a);
	printf("Value of (a+1): %d\n", a + 1);
	printf("Value of &a+1: %d\n", &a + 1);


	return (0);
}
