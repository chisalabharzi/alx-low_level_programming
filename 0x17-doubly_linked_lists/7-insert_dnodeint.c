#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position in a 
 * doubly linked list
 *
 * @h: pointer to the head of the list
 * @idx: index of the new node
 * @n: value of the new node
 *
 * Return: the address of the new node,
 *	NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *currentNode;
	unsigned int position;

	newNode = NULL;

	if (idx == 0)
	{
		newNode = add_dnodeint(h, n);
	}
	else
	{
		currentNode = *h;
		position = 1;

		if (currentNode != NULL)
		{
			while (currentNode->prev != NULL)
				currentNode = currentNode->prev;
		}

		while (currentNode != NULL)
		{
			if (position == idx)
			{
				if (currentNode->next == NULL)
				{
					newNode = add_dnodeint_end(h, n);
				}
				else
				{
					newNode = malloc(sizeof(dlistint_t));
					if (newNode != NULL)
					{
						newNode->n = n;
						newNode->next = currentNode->next;
						newNode->prev = currentNode;
						currentNode->next->prev = newNode;
						currentNode->next = newNode;
					}
				}
				break;
			}

			currentNode = currentNode->next;
			position++;
		}
	}

	return (newNode);
}
