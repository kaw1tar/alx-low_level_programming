#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the head
 * @idx: index
 * @n: integer
 * Return: Always 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *newn = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !newn)
		return (NULL);

	newn->n = n;
	newn->next = NULL;
	if (!idx)
	{
		newn->next = *head;
		*head = newn;
		return (newn);
	}

	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			newn->next = node->next;
			node->next = newn;
			return (newn);
		}
		i++;
		node = node->next;
	}
	free(newn);
	return (NULL);
}
