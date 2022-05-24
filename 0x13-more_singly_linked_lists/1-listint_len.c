#include "lists.h"
#include <stdio.h>

/**
 * listint_len - record linked listint_t list elmnts num .
 * @h: the list head pointer.
 * Return: The num of list elmnts.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
	nodes++;
	h = h->next;
	}

	return (nodes);
}
