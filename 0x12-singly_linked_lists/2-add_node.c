#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Add a new node at the beginning of a list_t list
 * @head: A pointer to a pointer to the head of the list
 * @str: The string to be added to the new node
 * Return: The address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node_new;

	if (str == NULL)
	{
		return (NULL);
	}

	node_new = malloc(sizeof(list_t));
	if (node_new == NULL)
		return (NULL);

	node_new->str = strdup(str);
	if (node_new->str == NULL)
	{
		free(node_new);
		return (NULL);
	}

	node_new->len = strlen(str);
	node_new->next = *head;
	*head = node_new;

	return (node_new);
}
