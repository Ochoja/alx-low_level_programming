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
	/**list pointer used to traverse**/
	list_t *listPtr = *head;
	list_t *node = (list_t *)malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	/**count number of char(s) in string**/
	while (str[i++])
		len++;

	node->len = len;
	node->str = strdup(str);
	node->next = NULL;

	/**traverse to end of list**/
	while (listPtr->next != NULL)
		listPtr = listPtr->next;

	listPtr->next = node;

	return (node);
}
