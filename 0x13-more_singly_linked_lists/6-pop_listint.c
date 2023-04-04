#include "lists.h"
/**
 * pop_listint - a function that pop.
 *
 * @head: a pointer linked list;
 *
 * Return: head value;
 */
int pop_listint(listint_t **head)
{
	if (*head)
	{
		int n = (*head)->n;
		*head = (*head)->next;
		return n;
	}
	else
	{
		return (0);
	}
}
