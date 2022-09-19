#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: integer pointer
 * @b: integer pointer
 */

void swap_int(int *a, int *b)
{
	int hold = *a;
	*a = *b;
	*b = hold;
}
