#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add node to end of list
 * @head: pointer to head node
 * @str: node string
 * Return: pointer to new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	int i = 0;
	list_t *lastnode = *head;
	list_t *node = (list_t *)malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	/**count number of char(s) in string**/
	while (str[i++])
		len++;

	node->len = len;
	node->str = strdup(str);
	node->next = NULL;

	if (*head == NULL)
		*head = (list_t *)node;
	else
	{
		if (lastnode->next == NULL)
			lastnode->next = (list_t *)node;
		else
		{
			while (lastnode->next != NULL)
				lastnode = lastnode->next;

			lastnode->next = node;
		}
	}

	return (node);
}
