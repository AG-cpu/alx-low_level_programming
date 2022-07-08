#include "lists.h"

/**
 * sum_dlistint - the data sum op.
 * @head: pointer.
 * Return: sum result.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
