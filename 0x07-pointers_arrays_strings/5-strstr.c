#include "main.h"
#include <stddef.h>
/**
 * _strstr - locate a substring
 * @haystack: string argument
 * @needle: substring to be located
 * Return: pointer to beginning of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int status = 0;
	char *start;

	while (haystack[i++])
	{
		if (haystack[i] == needle[i])
		{
			start = &haystack[i];
			j = i;

			while (needle[j++])
			{
				if (needle[j] == haystack[j])
					status = 1;
				else
				{
					status = 0;
					break;
				}
			}
		}
	}

	if (status == 1)
		return (start);
	else
		return (NULL);
}
