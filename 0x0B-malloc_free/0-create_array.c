#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars
 * @size: size of array
 * @c: char used to initialize array
 * Return: pointer to char array
 */

char *create_array(unsigned int size, char c)
{
	char *p = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	if (p == NULL)
		return (NULL);

	while (i < size)
	{
		p[i] = c;
		i++;
	}

	p[i] = '\0';

	return (p);
}
