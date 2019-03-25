#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function adds a new node
 * at the end of a listint_t list
 * @head: head of list
 * @n: data of new node
 *
 * Return: address of new element of NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
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
