#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function adds a new node at the beginning
 * of a list_t list
 * @head: head of list
 * @str: string to use
 *
 * Return: address of the new element, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	if (!str)
		return (NULL);
	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
		return (NULL);
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
