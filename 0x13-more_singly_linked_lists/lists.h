#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
/**
 * struct listint - linked list of int
 *
 * @n: integer;
 * @next: point to the next;
 *
 * Description: Linked list;
 */
typedef struct listint
{
	int n;
	struct listint *next;
} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
#endif
