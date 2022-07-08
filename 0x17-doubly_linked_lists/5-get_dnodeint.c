#include "lists.h"

/**
 * get_dnodeint_at_index - finde node.
 * @head: list start pointer.
 * @index: node index.
 * Return: if cracked - NULL.
 *     else - the node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
