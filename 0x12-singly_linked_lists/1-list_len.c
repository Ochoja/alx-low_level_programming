#include <stddef.h>
#include "lists.h"

/**
 * list_len - function returns length of list
 * @h: pointer to list
 * Return: length of list
 */

size_t list_len(const list_t *h)
{
	unsigned int length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}

	return (length);
}
