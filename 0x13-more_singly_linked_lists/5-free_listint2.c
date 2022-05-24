#include "lists.h"

/**
 * free_listint2 - list mem free.
 * @head: list head allc.
 * Description: reset null to list head.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	return;

	while (*head)
	{
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	}

	head = NULL;
}
