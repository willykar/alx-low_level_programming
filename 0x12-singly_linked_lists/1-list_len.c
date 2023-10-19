#include "lists.h"
/**
 * list_len - returns number of elements in a list_t
 * @h: pointer to the list
 * Return: number of elments in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
