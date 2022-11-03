#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds node to beginning of list
 * @head: pointer to head pointer
 * @n: node integer value
 * @Return: address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = (listint_t *)malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = (int) n;
	node->next = *head;
	*head = node;

	return (node);
}
