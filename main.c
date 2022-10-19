#include <stdio.h>

struct data{
	int sum;
	char *ptr;
};

int main(void)
{
	struct data Name;
	Name.sum = 50;
	Name.ptr = "Holberton";

	printf("%s is %d\n", Name.ptr, Name.sum);

	return 0;
}
