#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list,
 * and returns the number of nodes.
 * @head: Pointer to the head of the doubly linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t count = 0;

	if (head == NULL)
		return (count);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}

	return (count);
}
