#include "lists.h"

/**
 * list_len - a function that return number of elements in list.
 * @h: pointer to list.
 *
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
