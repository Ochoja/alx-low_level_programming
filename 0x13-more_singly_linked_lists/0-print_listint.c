#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints values of a linked list
 * @h: pointer to head node (ie head pointer)
 * Return: number of nodes in linked list
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