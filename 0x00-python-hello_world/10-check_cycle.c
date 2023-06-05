#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it.
 * @list: the p to begin of the node cycle.
 * Return: a zero or 1 depends.
 */

int check_cycle(listint_t *list)
{
	listint_t *current, *check;

	if (list == NULL || list->next == NULL)

	{
		return (0);
	}

	current = list;

	check = current->next;

	while (current != NULL && check->next != NULL
		&& check->next->next != NULL)
	{

		if (current == check)

		{
			return (1);
		}

		current = current->next;
		check = check->next->next;

	}

	return (0);
}
