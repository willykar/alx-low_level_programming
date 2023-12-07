#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth
 * node of a dlistint_t linked list.
 * @head: A pointer to the head of the list
 * @index: index of the node we are searching for
 * Return: (nth node or null)
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size_cont;
	dlistint_t *tmp;

	size_cont = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size_cont)
	return (tmp);
	size_cont++;
	tmp = tmp->next;
	}
	return (NULL);
}
