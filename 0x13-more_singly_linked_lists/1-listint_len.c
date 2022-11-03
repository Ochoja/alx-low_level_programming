#include "lists.h"

/**
 * list_len - returns length of a list
 * @h: pointer to head node
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}

	return (length);
}
