#include "lists.h"

/**
 * add_dnodeint_end - function adds a new node at the end
 * of a dlistint_t list
 * @head: head of list
 * @n: value of new node
 *
 * Return: address of new element, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head, *new;

	if (!*head)
	{
		*head = malloc(sizeof(dlistint_t));
		if (!(*head))
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		return (*head);
	}
	while (tmp->next)
		tmp = tmp->next;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = tmp;
	tmp->next = new;
	return (new);
}
