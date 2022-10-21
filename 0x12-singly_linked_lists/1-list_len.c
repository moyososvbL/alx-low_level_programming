#include "lists.h"

/**
 * list_len - Finds the number of elements
 * @h: The list_t list.
 *
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t ele = 0;

	while (h)
	{
		ele++;
		h = h->next;
	}

	return (ele);
}
