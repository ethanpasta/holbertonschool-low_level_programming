#include "lists.h"

/**
 * free_dlistint - function frees a dlistint_t list
 * @head: head of list
 *
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
