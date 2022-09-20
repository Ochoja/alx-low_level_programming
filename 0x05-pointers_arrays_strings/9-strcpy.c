#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src,
 * to the buffer pointed to by dest
 * @dest: holds location of buffer
 * @src: points to a string
 * Return: char*
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	/**copy '\0' to dest**/
	dest[i] = '\0';

	return (dest);
}
