#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements of a
 * list
 *
 * @h: The head of the list
 * Return: (number of nodes)
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count_hed;

	count_hed = 0;

	if (h == NULL)
		return (count_hed);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count_hed++;
		h = h->next;
	}

	return (count_hed);
}
