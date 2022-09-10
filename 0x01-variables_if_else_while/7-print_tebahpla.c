#include <stdio.h>
/**
 * main - main function
 * Return : 0 end program successfully
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
