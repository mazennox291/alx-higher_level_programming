#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * listnums_int - get number of nodes
  * @hnums: the tree number links
  * Return: the size of the int numbers
  */

size_t listnums_int(const listint_t *hnums)
{
	int lenght = 0;

	while (hnums != NULL)
	{
		++lenght;
		hnums = hnums->next;
	}

	return (lenght);
}

/**
  * is_palindrome - a func that check if palindrome or not
  * @head: the starting point for the nodes
  * Return: 0 or 1 depends on the checks but int.
  */

int is_palindrome(listint_t **head)
{
	listint_t *start = NULL, *end = NULL;
	unsigned int i = 0, len = 0, len_cyc = 0, len_list = 0;

	if (head == NULL)

	{
		return (0);
	}


	if (*head == NULL)

	{
		return (1);
	}


	start = *head;
	len = listnums_int(start);
	len_cyc = len * 2;
	len_list = len_cyc - 2;
	end = *head;

	for (; i < len_cyc; i = i + 2)
	{
		if (start[i].n != end[len_list].n)

		{
			return (0);
		}

		len_list = len_list - 2;
	}

	return (1);
}
