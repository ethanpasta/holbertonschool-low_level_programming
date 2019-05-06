#include "lists.h"

/**
 * delete_dnodeint_at_index - function deletes a node at index
 * 'index' of a dlistint_t linked list
 * @head: head of list
 * @index: index of node to delete
 *
 * Return: 1 if succeeded, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (!tmp)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	for (; index--; tmp = tmp->next)
		if (!tmp)
			return (-1);
	tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
