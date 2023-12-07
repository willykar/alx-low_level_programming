#include "lists.h"

/**
 * add_dnodeint - A function that adds a new node at the beginning
 * of a list
 * @head: The head of the list
 * @n: The value of an element
 * Return: (address of the new element)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;
	dlistint_t *head_num;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->prev = NULL;
	head_num = *head;

	if (head_num != NULL)
	{
		while (head_num->prev != NULL)
			head_num = head_num->prev;
	}

	new_element->next = head_num;

	if (head_num != NULL)
		head_num->prev = new_element;

	*head = new_element;

	return (new_element);
}
