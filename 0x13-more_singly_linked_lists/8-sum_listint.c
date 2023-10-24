#include <stddef.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of
 * a listint_t linked list
 * @head: pointer to the head of the list
 * Return: sum of all the data(n) or 0 if it is empty
 */
int sum_listint(listint_t *head)
{

	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
