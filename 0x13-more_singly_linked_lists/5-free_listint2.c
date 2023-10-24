#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to a pointer to the head
 */
void free_listint2(listint_t **head)
{
	listint_t *count;

	if (head == NULL)
		return;

	while (*head)
	{
		count = (*head)->next;
		free(*head);
		*head = count;
	}

	*head = NULL;
}
