#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to the head of the list
 * @idx: new node to be inserted
 * @n: value that will be inserted in the new node
 * Return: pointer to the new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
		listint_t *count = *head;
		unsigned int a;

		new_node = malloc(sizeof(listint_t));

		if (!new_node || !head)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;

		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}

		for (a = 0; count && a < idx; a++)
		{
			if (a == idx - 1)
			{
				new_node->next = count->next;
				count->next = new_node;
				return (new_node);
			}
			else
				count = count->next;
		}

		return (NULL);
}
