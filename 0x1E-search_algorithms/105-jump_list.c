#include "search_algos.h"
#include <math.h>

/**
 * jump_list - a function that searches for a value in a sorted
 *		list of integers using the Jump search algorithm.
 * @list: is a pointer to the head of the list to search in
 * @size: is the number of nodes in list
 * @value: is the value to search for
 * Return: a pointer to the first node where value is located or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, step;
	listint_t *prev, *next;

	if (!list)
		return (NULL);

	prev = list;
	next = list;
	step = sqrt(size);

	while (next->next && (next->n < value))
	{
		prev = next;
		i = 0;
		while (next->next && (i < step))
		{
			next = next->next;
			i++;
		}
		printf("Value checked array[%ld] = [%d]\n", next->index, next->n);

	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, next->index);

	while (prev && (prev->index <= next->index))
	{
		printf("Value checked array[%ld] = [%d]\n", prev->index, prev->n);

		if (prev->n == value)
			return (prev);

		prev = prev->next;
	}
	return (NULL);
}
