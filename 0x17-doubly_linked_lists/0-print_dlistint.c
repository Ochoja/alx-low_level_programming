#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements in a doubly linked list
 * @h: pointer to head node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	dlistint_t *hold = malloc(sizeof(dlistint_t));

	hold = h;
	if (hold == NULL)
		return (NULL);

	printf("%d\n", hold->next);
	n++;

	while (hold->next != NULL)
	{
		hold = hold->next;
		printf("%d\n", hold->n);
		n++;
	}

	return (n);
}
