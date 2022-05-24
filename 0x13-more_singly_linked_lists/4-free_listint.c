#include "lists.h"

/**
 * free_listint - list mem free.
 * @head: free list pointer head.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
	tmp = head->next;
	free(head);
	head = tmp;
	}
}
