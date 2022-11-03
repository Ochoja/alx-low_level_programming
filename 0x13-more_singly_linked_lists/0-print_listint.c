#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{
	int num = 0;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return num;
}
