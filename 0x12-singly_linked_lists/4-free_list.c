#include "lists.h"
#include <stdlib.h>
/**
 * free_list- free the linked list
 * @head: linked list
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
