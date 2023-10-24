#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t linked list
 * @head: pointer to a pointer to the head of the list
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);


	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;


	return (data);
}
