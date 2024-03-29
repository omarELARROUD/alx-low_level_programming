#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: a linked list;
 * Return: the number of nodes;
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h)
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	return (count);
}
