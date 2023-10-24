#include <stdio.h>
#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the hea node
 */
void free_listint(listint_t *head)
{
	listint_t *count;
	listint_t *current = head;

	while (current != NULL)
	{
		count = current;
		current = current->next;
		free(count);
	}
}
