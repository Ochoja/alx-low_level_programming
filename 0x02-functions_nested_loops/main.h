#include <uninstd.h>
/**
 * _putchar - returns characters
 * Return: check functions for return types
 */

int _putchar(char c);

int _putchar(char c)
{
	return (write(1, &c, 1));
}
