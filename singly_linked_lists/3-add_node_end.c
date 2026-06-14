#include "lists.h"

/**
 *add_node - adds a new node at the beginning of a list_t list
 *@head: head pointer
 *@str:string
 *Return: NULL || address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = 0;
	list_t *tmp = 0;
	unsigned int l = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[l] != '\0')
	{
		l++;
	}
	new->len = l;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (new);
}
