#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a list
 * @h: Pointer to head node
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
