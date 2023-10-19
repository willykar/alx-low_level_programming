#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t
 * @head: pointer to the head of the listt
 */
void free_list(list_t *head)
{
	list_t *current;

		while (head)
		{
			current = head->next;
			free(head->str);
			free(head);
			head = current;
		}
}
