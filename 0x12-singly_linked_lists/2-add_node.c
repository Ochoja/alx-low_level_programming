#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds node to beginning of a list
 * @head: pointer to head node
 * @str: string to be added
 * Return: pointer to list or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	int i = 0;
	list_t *node = (list_t *)malloc(sizeof(list_t));

	while (str[i++])
		len++;

	node->len = len;
	node->str = strdup(str);
	node->next = *head;

	*head = (list_t *)node;

	if (head)
		return (node);
	else
		return (NULL);
}
