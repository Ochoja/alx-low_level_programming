#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - adds all integers in an int list
 * @head: pointer to head node
 * @Return: sum of list data
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (ptr == NULL)
		return (0);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
