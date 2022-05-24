#include "lists.h"
#include <stdio.h>

/**
 * print_listint - listint_t list.
 * @h: the list head pointer.
 * nodes - linked_list node
 * Return: The number of nodes to list.
 */
size_t print_listint(const listint_t *h)

{
	size_t nodes = 0;

	while (h)
	{
	nodes++;
	printf("%d\n", h->n);
	h = h->next;
	}

	return (nodes);
}
