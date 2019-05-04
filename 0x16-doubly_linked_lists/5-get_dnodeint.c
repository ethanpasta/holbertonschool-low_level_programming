#include "lists.h"

/**
 * get_dnodeint_at_index - function returns the nth node of
 * a dlistint_t linked list
 * @head: head of list
 * @index: index of node
 *
 * Return: address of node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head; i++)
		head = head->next;
	if (i == index)
		return (head);
	return (NULL);
}
