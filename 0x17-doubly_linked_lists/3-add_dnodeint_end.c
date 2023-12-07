#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a new node at the end
 * of a list
 *
 * @head: The head of the list
 * @n: elemnt value
 * Return: (address of the new element)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *head_cont;
	dlistint_t *new_element;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->next = NULL;

	head_cont = *head;

	if (head_cont != NULL)
	{
		while (head_cont->next != NULL)
			head_cont = head_cont->next;
		head_cont->next = new_element;
	}
	else
	{
		*head = new_element;
	}

	new_element->prev = head_cont;

	return (new_element);
}
