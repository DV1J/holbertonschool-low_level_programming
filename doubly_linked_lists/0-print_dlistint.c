#include "lists.h"

/**
 *print_dlistint - prints all the elements of a dlistint_t list
 *@h: head pointer
 *Return: elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elements;

	for (elements = 0; h != NULL; elements++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (elements);
}

