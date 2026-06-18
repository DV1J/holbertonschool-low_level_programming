#include "lists.h"

/**
 *insert_dnodeint_at_index -  inserts a new node at a given position
 *@h: head pointer
 *@idx: index of the list where the new node should be added
 *@n: number
 *Return: NULL || address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n, *tmp;
	unsigned int i;

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;

	if (idx == 0)
	{
		new_n->next = *h;
		new_n->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_n;
		*h = new_n;
		return (new_n);
	}
	tmp = *h;
	for (i = 0; tmp != NULL && i < idx - 1; i++)
		tmp = tmp->next;
	if (tmp == NULL)
	{
		free(new_n);
		return (NULL);
	}
	new_n->next = tmp->next;
	new_n->prev = tmp;
	if (tmp->next == NULL)
		tmp->next->prev = new_n;
	tmp->next = new_n;
	return (new_n);
}
