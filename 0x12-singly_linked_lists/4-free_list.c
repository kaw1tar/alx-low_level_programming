#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees alist_t list
 * list_t: list
 * @head: pointer
 */

void free_list(list_t *head)
{
	list_t *cur;

	while (head != NULL)
	{
		cur = head;
		head = head->next;
		free(cur->str);
		free(cur);
	}
}
