#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list
 * @head: A pointer to the head of the listint_t to check
 * Return: If the list is not looped - 0
 * otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tor, *har;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tor = head->next;
	har = (head->next)->next;

	while (har)
	{
		if (tor == har)
		{
			tor = head;
			while (tor != har)
			{
				nodes++;
				tor = tor->next;
				har = har->next;
			}

			tor = tor->next;
			while (tor != har)
			{
				nodes++;
				tor = tor->next;
			}

			return (nodes);
		}

		tor = tor->next;
		har = (har->next)->next;
	}

	return (0);
}
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: A pointer to head of the list
 * Return: (number of nodes) or exits with status  98
 * on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, ind = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (ind = 0; ind < nodes; ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
