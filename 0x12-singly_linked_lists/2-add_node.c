#include "lists.h"
#include <string.h>
/**
 * add_node - add a node to the LL
 * @head: linked list
 * @str: element to ad to the linked list
 * Return: the number of nodes
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
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
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
