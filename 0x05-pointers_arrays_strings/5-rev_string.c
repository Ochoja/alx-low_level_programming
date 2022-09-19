#include "main.h"
/**
 * rev_string - reverse a string
 * @s: pointer to string
 */

void rev_string(char *s)
{
	char tempString[];
	int total = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		total++;

	for (i = 0; (total - 1) >= 0; i++)
	{
		tempString[i] = s[total - 1];
		total--;
	}

	for (i = 0; tempString[i] != '\0'; i++)
		s[i] = tempString[i];
}
