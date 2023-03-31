#include "lists.h"
/**
 * list_len - print the number of elements in the linked list
 * @h: linked list
 * Return: the number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
