#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index -  a function that returns the nth node
 * of a listint_t linked list
 * @head: a pointer to the head of the list
 * @index: of the node to retrieve
 *
 * Return: nth node of a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m;

	for (m = 0; head != NULL && m < index; m++)
	{
		head = head->next;
	}


	return ((m == index) ? head : NULL);
}
