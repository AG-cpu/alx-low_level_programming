#include "lists.h"

/**
 * sum_listint - with in list total sum
 * @head: list head allc.
 * Return: none - 0.
 * else - sum_list value.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
	sum += head->n;
	head = head->next;
	}

	return (sum);
}
