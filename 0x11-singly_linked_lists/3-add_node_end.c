#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - function adds a new node at the end
 * of the list_t list
 * @head: head of the list
 * @str: string for new node
 *
 * Return: address of new element, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *new;
	list_t *tmp = *head;

	new = malloc(sizeof(size_t));
	if (!new || !head || !str)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	while (new->str[len])
		len++;
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (new);
}
