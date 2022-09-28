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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);

		}
	}

	return (NULL);
}
