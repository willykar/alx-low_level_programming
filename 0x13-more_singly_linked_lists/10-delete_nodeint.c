#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at
 * index of a listint_t linked list
 * @head: pointer to the first element in the list
 * @index: of the node to be deleted
 * Return: (1) if success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *prev = NULL;
	listint_t *current = *head;
	unsigned int a = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (current != NULL && a < index)
	{
		prev = current;
		current = current->next;
		a++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	prev->next = current->next;
	free(current);
	return (1);
}
