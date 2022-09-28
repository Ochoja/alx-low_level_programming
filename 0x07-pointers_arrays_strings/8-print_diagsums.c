#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of diagonals in square matrix
 * @a: array argument
 * @size: length of row and columns
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int total = 0;

	for (i = 0; i < size; i++)
	{
		total += a[i][j];
		j++;
	}

	printf("%d, ", total);

	j = size - 1;
	for (i = 0; i < size; i++)
	{
		total += a[i][j];
		j--;
	}

	printf("%d\n", total);
}
