#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - A function that prints all elements of a list
 * @h: The head of a doubly linked list
 * Return: (number of nodes)
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t i = 0;

	while (ptr && ptr->prev)
		ptr = ptr->prev;
	while (ptr)
	{
		printf("%d\n", ptr->i);
		i++;
		ptr = ptr->next;
	}
	return (i);
}
