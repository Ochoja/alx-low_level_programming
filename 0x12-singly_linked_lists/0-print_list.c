#include <stdio.h>
#include "main.h"


/**
 * print_list - traverse and print elements of a list
 * @h: pointer to list
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	unsigned long n = 0;

	while (h->next != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}

	return (n);
}
