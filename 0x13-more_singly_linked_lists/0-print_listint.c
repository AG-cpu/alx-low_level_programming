#include "lists.h"
#include <stdio.h>

/**
 *  - the list elmnt cat.
 * @h: the list head pointer.
 * Return: The list nodes numb.
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
