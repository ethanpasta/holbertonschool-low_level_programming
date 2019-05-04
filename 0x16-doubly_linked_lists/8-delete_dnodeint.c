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
	unsigned int i;
	dlistint_t *tmp = *head;
	dlistint_t *free_t;

	if (index == 0 && *head)
	{
		*head = (*head)->next;
		free(tmp);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	for (i = 0; tmp && i < index - 1; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (-1);
	free_t = tmp->next;
	tmp->next = free_t->next;
	free_t->next->prev = tmp;
	free(free_t);
	return (-1);
}
