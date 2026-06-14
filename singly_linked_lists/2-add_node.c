#include "lists.h"

/**
 *add_node - adds a new node at the beginning of a list_t list
 *@head: head pointer
 *@str:string
 *Return: NULL || address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = 0;
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
	new->next = *head;
	*head = new;
	return (new);
}


