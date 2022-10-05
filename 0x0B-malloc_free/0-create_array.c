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
	int i = 0;

	if (size == NULL)
		return (NULL);

	while (i < size)
	{
		p[i] = c;
		i++;
	}

	p[i] = '\0';

	return (p);
}
