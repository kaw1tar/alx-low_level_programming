#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * list_t: list of nodes
 * @h: pointer
 * Return: num of elements in a linked
 */

size_t list_len(const list_t *h)
{
	size_t len;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
