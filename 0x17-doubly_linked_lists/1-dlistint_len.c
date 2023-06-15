#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @head: pointer to the head of the doubly linked list.
 *
 * Return: the number of the nodes in the list
 */
size_t dlistint_len(const dlistint_t *head)
{
	size_t count = 0;

	if (head == NULL)
		return (count);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		count++;
		head = head->prev;
	}

	return (count);
