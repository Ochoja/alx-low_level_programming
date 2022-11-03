#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to head node
 * Return: void
 */
void free_list(list_t *head)
{
	free(head);
}
