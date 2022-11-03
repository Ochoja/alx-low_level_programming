#include <stdlib.h>
#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastnode = *head;
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL || head == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else if (lastnode->next == NULL)
		lastnode->next = node;
	else
	{
		while (lastnode->next != NULL)
			lastnode = lastnode->next;

		lastnode->next = node;
	}

	return (node);
}
