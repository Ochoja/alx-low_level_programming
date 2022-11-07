#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at a position
 * @head: pointer to head node
 * @idx: index where node would be inserted
 * @n: integer to be inserted
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t **ptr = head;
	int i = 0;
	listint_t *node = malloc(sizeof(listint_t));

	node->n = n;
	node->next = NULL;

	if (!node)
		return NULL;

	if (idx == 0)
	{
		node = (*head)->next;
		*head = node;
		return idx;
	}

	while (i < idx - 1)
	{
		*ptr = (*ptr)->next;

		if (!*ptr->next)
			return NULL;
	}

	node->next = *ptr->next;
	*ptr->next = node;

	return (node);
}
