#include "lists.h"

/**
 * sum_dlistint - A function that returns the sum
 * of all the data (n) of a doubly linked list
 *
 * @head: The head of the list
 * Return: (sum)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_cont;

	sum_cont = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum_cont += head->n;
			head = head->next;
		}
	}

	return (sum_cont);
}
