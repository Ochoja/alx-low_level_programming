#include <stdlib.h>
#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastnode = *head;
	listint_t *node = (listint_t *)malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (lastnode == NULL)
		lastnode = node;
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
