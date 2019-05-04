#include "lists.h"

/**
 * inset_dnodeint_at_index - function inserts a new node at a given position
 * @h: head of list
 * @idx: index where the new node should be added
 * @n: value of new node
 *
 * Return: address of new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;
	unsigned int i;

	for (i = 0; tmp && i < idx - 1; i++)
		tmp = tmp->next;
	if (!tmp)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;
	tmp->next = new;
	return (new);
}
