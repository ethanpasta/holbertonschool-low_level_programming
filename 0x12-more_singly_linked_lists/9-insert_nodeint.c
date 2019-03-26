#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function inserts a new node at
 * a given position
 * @head: head of list
 * @idx: the index of the list where the new node should be added
 * @n: value of new node
 *
 * Return: address of new node, or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new;

	if (!head)
		return (NULL);
	tmp = *head;
	if (!idx)
	{
		new = malloc(sizeof(listint_t));
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	while (--idx && tmp)
	{
		tmp = tmp->next;
	}
	if (!tmp)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (tmp->next)
	{
		new->next = tmp->next;
		tmp->next = new;
	}
	else
	{
		new->next = NULL;
		tmp->next = new;
	}
	return (new);
}
