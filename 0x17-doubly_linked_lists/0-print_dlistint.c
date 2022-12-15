#include "lists.h"

/**
 * print_dlistint - prints all elements in a doubly linked list
 * @h: pointer to head node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *hold = h;

	while (hold != NULL)
	{
		printf("%d\n", hold->n);
		hold = hold->next;
		n++;
	}

	return (n);
}
