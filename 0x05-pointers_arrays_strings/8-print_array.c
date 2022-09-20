#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n numbers of an array
 * @a: array
 * @n: holds number of values to be printed
 */

void print_array(int *a, int n)
{
	/**counter variable**/
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", a[i]);
}
