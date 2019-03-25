#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function frees a listint_t list
 * @head: head of list
 *
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
