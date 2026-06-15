#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *@head: head pointer
 *@n: number
 *Return: NULL || new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_n;
	dlistint_t *tmp;

	new_n =  malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->prev = NULL;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_n;
	new_n->prev = tmp;
	return (new_n);
}
