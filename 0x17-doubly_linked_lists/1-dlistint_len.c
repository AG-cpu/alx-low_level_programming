#include "lists.h"

/**
 * dlistint_len - number of lists elmnts.
 * @h: start pointer.
 * Return: count lists elmnts.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
