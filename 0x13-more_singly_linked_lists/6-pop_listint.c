#include "lists.h"

/**
 * pop_listint - list head node removel.
 * @head: list head allc .
 * Return: none - 0.
 * else - The head value.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
	return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (ret);
}
