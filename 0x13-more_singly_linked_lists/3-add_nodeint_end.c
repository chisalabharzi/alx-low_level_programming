#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: a pointer to the head of the listint_t
 * @n: an integer to be stored in the new node
 * Return: address of the new element, NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
