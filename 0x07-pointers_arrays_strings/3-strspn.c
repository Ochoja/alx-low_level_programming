#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int length = 0;
	int i = 0;
	int j = 0;

	/**compare characters in s with all**/
	/**charcters in accept using their**/
	/**ASCII values**/
	while ((s[i] >= 65 && s[i] < 92) || (s[i] >= 97 && s[i] < 123))
	{
		while (accept[j++])
		{
			if (s[i] == accept[j])
				length++;
		}
		j = 0;
		i++;
	}

	return (length);
}
