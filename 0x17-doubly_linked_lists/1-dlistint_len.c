#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements in
 * a double linked list
 * @h: The head of a list
 * Return: (number of nodes)
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count_hed;

	count_hed = 0;

	if (h == NULL)
		return (count_hed);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count_hed++;
		h = h->next;
	}

	return (count_hed);
}
