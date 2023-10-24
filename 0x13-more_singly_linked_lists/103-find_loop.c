#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the linked list
 * Return: (address of the node where the loop starts), or NULL
 * if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *m = head;
	listint_t *n = head;

	if (!head)
		return (NULL);

	while (m && n && n->next)
	{
		n = n->next->next;
		m = m->next;
		if (n == m)
		{
			m = head;
			while (m != n)
			{
				m = m->next;
				n = n->next;
			}
			return (n);
		}
	}
	return (NULL);
}
