#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes the node at index.
 *@head: head pointer
 *@index: where node to be deleted is
 *Return: 1 || -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	for (i = 0; tmp != NULL && i < index; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (-1);
	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		if (tmp->prev != NULL)
			tmp->prev->next = tmp->next;

		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
