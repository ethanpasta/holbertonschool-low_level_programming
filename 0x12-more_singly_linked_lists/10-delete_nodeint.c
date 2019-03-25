#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes node at index
 * of a listint_t linked list
 * @head: head of list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if succeeded, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *todelete;

	if (!head || !*head)
		return (-1);
	if  (!index)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	tmp = *head;
	while (--index && tmp)
		tmp = tmp->next;
	if (!tmp)
		return (-1);
	todelete = tmp->next;
	tmp->next = todelete->next;
	free(todelete);
	return (1);
}
