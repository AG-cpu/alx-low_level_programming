#include "lists.h"

/**
 * get_nodeint_at_index - nodes allc locater
 * @head: list head allc.
 * @index: node to location - biggin at 0.
 * Return: unlocated - NULL.
 * else - node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
	if (head == NULL)
	return (NULL);

	head = head->next;
	}

	return (head);
}
