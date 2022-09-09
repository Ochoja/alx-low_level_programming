#include <stdio.h>

/**
 *main - print size of various types
 *Return: 0 to end program
 */

int main(void)
{
printf("Size of a char: %d byte(s)", sizeof(char));
printf("Size of a int: %d byte(s)", sizeof(int));
printf("Size of a long int: %d byte(s)", sizeof(long));
printf("Size of a long long int: %d byte(s)", sizeof(long long int));
printf("Size of a float: %d byte(s)", sizeof(float));
return (0);
}
