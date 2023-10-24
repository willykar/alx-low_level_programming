#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: a pointer to a pointer to the head node
 * @n: the integer value
 * Return: the address of the new element or NUll if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *count, *temp;


	count = malloc(sizeof(listint_t));
	if (count == NULL)
	{
		return (NULL);
	}

	count->n = n;
	count->next = NULL;

	if (*head == NULL)
	{
		*head = count;
	}
	else
	{
		temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = count;
	}

	return (count);
}
