#include "lists.h"

/**
 * add_dnodeint - function adds a new node at the beginning
 * of a dlistint_ t list
 * @head: head of list
 * @n: value of new node
 *
 * Return: address of new element, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
