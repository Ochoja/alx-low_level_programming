#include <stddef.h>
#include "lists.h"

/**
 * add_node - adds node to beginning of a list
 * @head: pointer to pointer to list
 * @str: string to be added
 * Return: pointer to list
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	int i = 0;
	list_t *node = malloc(sizeof(list_t));

	while (str[i++])
		len++;

	node->len = len;
	node->str = str;
	node->next = *head;

	*head = &node;
	return (node);
}
