#include "lists.h"

/**
 * free_dlistint - free list.
 * @head: start pointer.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
