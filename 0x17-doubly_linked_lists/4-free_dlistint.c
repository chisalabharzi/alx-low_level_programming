#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the head of the doubly linked list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while ((curent_node = head) != NULL)
		{
			head = head->next;
			free(current_node);
		}
	}
}

