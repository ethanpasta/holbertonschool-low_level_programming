#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function frees a list_t list
 * @head: head of the list
 *
 * Return: none
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
