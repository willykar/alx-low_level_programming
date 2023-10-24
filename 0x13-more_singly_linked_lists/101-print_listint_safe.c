#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: A pointer to head of the list
 * Return: (number of nodes) or exits with status  98
 * on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t number = 0;
	long int dif;

	while (head)
	{
		dif = head - head->next;
		number++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (dif > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (number);
}
