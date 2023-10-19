#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a
 * list_t list
 * @head: pointer to pointer to the head of list_t
 * @str: string to be duplicated
 * Return: address of the new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *current;
	size_t n;

	current = malloc(sizeof(list_t));

	if (current == NULL)
	{
		return (NULL);
	}

	current->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	current->len = n;
	current->next = *head;
	*head = current;

	return (*head);
}
