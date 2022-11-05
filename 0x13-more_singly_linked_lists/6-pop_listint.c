#include <stdlib.h>
#include "lists.h>

/**
* pop_listint - deletes head node of a list
* @head: pointer to head node pointer
* Return: head node's data
*/
int pop_listint(listint_t **head)
{
	int data = 0;

	if (*head == NULL)
		return (0);
	else
	{
		data = *head->n;
		free(*head);
	}

	return (data);
}
