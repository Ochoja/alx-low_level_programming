#include "lists.h"

/**
 * dlistint_len - returns number of elements in list
 * @h: pointer to head node
 * @Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;
	const dlistint_t hold = h;

	while (hold != NULL)
	{
		hold = hold->next;
		length++;
	}

	return (length);
}
