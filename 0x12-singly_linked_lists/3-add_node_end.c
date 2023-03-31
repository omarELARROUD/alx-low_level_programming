#include "lists.h"
#include <string.h>
/**
 * add_node_end - add a node to the linked list
 * @head: linked list
 * @str: element to ad to the linked list
 * Return: the number of nodes
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *last;
	char *text;
	int i, len = 0;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	text = strdup(str);
	if (text == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; text[i] != '\0'; i++)
	{
		len++;
	}
	ptr->str = text;
	ptr->len = len;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = ptr;
	}

	return (ptr);
}
