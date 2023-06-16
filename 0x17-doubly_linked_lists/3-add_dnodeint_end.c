#include "lists.h"

/**
 * add_dnodeint_end - adds the node at the end of doubly linked list
 * @head: pointer to the head of the doubly linked list.
 * @n: value of the element
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	new_node->prev = current;

	return (new_node);
}
