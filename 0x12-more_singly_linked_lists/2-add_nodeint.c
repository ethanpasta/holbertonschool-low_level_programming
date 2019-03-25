#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function adds new node at the beginning
 * of a listint_t list
 * @head: head of list
 * @n: data of new node
 *
 * Return: address of new element, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
