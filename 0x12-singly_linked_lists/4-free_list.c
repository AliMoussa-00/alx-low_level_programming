#include "lists.h"

/**
 * free_list - free the list.
 * @head: pointer to the head of list.
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp, *next;

	if (!head)
		return;

	tmp = head;
	while (tmp)
	{
		next = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = next;
	}
}
