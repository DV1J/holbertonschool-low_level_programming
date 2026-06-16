#include "lists.h"

/**
 *sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 *@head: head pointer
 *Return: sum || 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	unsigned int count;

	for (count = 0; head != NULL; count++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
