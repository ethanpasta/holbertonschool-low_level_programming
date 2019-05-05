#include "lists.h"

/**
 * print_dlistint - function prints all the elements of a
 * dlistint_t list
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len;

	for (len = 0; h; len++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}
