#include "lists.h"

/**
 * list_len - function returns number of elements
 * in a linked list_t list
 * @h: head of linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
