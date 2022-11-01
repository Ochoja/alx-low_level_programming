#include <stddef.h>
#include <stdlib.h>
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
	char *newStr = (char *)str;
	int i = 0;
	list_t *node = (list_t *)malloc(sizeof(list_t));

	while (str[i++])
		len++;

	node->len = len;
	node->str = newStr;
	node->next = *head;

	*head = (list_t *)node;

	return (node);
}
