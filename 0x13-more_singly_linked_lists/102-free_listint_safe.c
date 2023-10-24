#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _ra - reallocates memory
 * @list: old list to append
 * @size: of the newlist
 * @new: new node that will be added to the list
 * Return: pointer to the new list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newl;
	size_t b;

	newl = malloc(size * sizeof(listint_t *));
	if (newl == NULL)
	{
		free(list);
		exit(98);
	}
	for (b = 0; b < size - 1; b++)
		newl[b] = list[b];
	newl[b] = new;
	free(list);
	return (newl);
}
/**
 * free_listint_safe - frees a listint_t list
 * @head: a pointer to a pointer
 * Return: size of the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t a, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (a = 0; a < num; a++)
		{
			if (*head == list[a])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _ra(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
