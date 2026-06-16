#include "lists.h"

/**
 *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *@head: head pointer
 *@index: check index
 *Return:NULL || nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int help;

	for (help = 0; head != NULL; help++)
	{
		if (help == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
