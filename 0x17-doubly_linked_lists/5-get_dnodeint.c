#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth nodeof a doubly linked list
 * @head: points to the head of the doubly linked list
 * @index: index of the nth node
 *
 * Return: pointer to the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (count == index)
			break;
		head = head->next;
		count++;
	}
	return (head);
}
