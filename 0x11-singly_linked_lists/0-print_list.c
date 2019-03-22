#include "lists.h"

/**
 * print_list - function prints all the elements
 * of a list_t list
 * @h: head of list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
	{
		if (!h->str)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
