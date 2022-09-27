#include "main.h"
/**
 * _memcpy - copies n bytes from src to dest
 * @dest: destination location
 * @src: source location
 * @n: number of byes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
