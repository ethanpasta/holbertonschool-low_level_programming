#include "lists.h"

/**
 * dlistint_len - function returns the number of elements in a linked
 * dlistint_t list
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	for (len = 0; h; len++)
		h = h->next;
	return (len);
}
