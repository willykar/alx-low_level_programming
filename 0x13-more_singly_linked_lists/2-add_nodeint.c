#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the
 * beginning of a listint_t list
 * @head: a pointer to a pointer to the list
 * @n: The integer value to be stored in the new node
 * Return: address of the new element, or NUlL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *count;

	count = malloc(sizeof(listint_t));
	if (count == NULL)
	{
		return (NULL);
	}

	count->n = n;
	count->next = *head;

	*head = count;

	return (count);
}
