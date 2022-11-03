#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: head of linklist node
 *
 * Return: the number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return ((size_t)NULL);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
