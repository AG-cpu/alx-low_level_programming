#include "lists.h"

/**
 * add_nodeint - renew the starter node at list.
 * @head: the list's head pointer.
 * @n: new node int rev.
 * Return: cracked - NULL.
 * else - the new elmnts pointer.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
