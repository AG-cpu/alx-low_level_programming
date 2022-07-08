#include "lists.h"

/**
 * add_dnodeint - add to the list start.
 * @head: list start pointer.
 * @n: new int.
 * Return: If cracked - NULL.
 *   else - the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
