#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * listint_t - list
 * @head: the head of the list
 * @n: integer
 * Return: & of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end;
	listint_t *current;

	new_end = malloc(sizeof(listint_t));

	if (new_end == NULL)
	{
		return (NULL);
	}

	new_end->n = n;
	new_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new_end;

	return (new_end);
}
