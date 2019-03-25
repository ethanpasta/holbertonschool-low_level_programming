#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function frees a listint_t list
 * @head: head of list
 *
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *tmp1;

	if (!head || !*head)
		return;
	tmp = (*head)->next;
	free(*head);
	*head = NULL;
	while (tmp)
	{
		tmp1 = tmp->next;
		free(tmp);
		tmp = tmp1;
	}
}
