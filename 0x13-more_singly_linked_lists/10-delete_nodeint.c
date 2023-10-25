#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * listint_t - list
 * @head: the head
 * @index: the index
 * Return: 1 ou -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prnode;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			prnode->next = node->next;
			free(node);
			return (1);
		}
		i++;
		prnode = node;
		node = node->next;
	}
	return (-1);
}
