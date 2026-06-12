#include "lists.h"

/**
 *list_len - eturns the number of elements in a linked list_t list
 *@h: head
 *Return: num of elements
 */
size_t list_len(const list_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
	{
		h = h->next;
	}
	return (counter);
}

