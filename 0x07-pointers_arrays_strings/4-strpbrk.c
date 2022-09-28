#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - search string for any set of bytes
 * @s: string to be searched
 * @accept: contains bytes used to search string 's'
 * Return: pointer to byte in 's' that matches that in accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i++])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (&s[j]);

			j++;
		}
		j = 0;
	}

	return (NULL);
}
