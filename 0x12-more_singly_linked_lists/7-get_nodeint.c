#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth
 * node of a listint_t linked list
 * @head: head of list
 * @index: index of node to find
 *
 * Return: address of node, or NULL on failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (i != index && head)
	{
		i++;
		head = head->next;
	}
	if (i != index)
		return (NULL);
	return (head);
}
