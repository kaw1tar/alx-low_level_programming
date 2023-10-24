#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list
 * listint_t - list
 * @h: the head
 * Return: num of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	int elem = 0;

	while (h != NULL)
	{
		h = h->next;
		elem++;
	}

	return (elem);
}
