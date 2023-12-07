#include "lists.h"

/**
 * free_dlistint - A function that frees a dlistint_t list.
 * @head: A pointer to the head of a list
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
