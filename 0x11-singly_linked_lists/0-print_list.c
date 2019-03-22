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
	const list_t *s;
	unsigned int i;

	s = h;
	for (i = 0; s; i++)
	{
		if (!s->str)
			printf("[%u] %s\n", s->len, "(nil)");
		else
			printf("[%u] %s\n", s->len, s->str);
		s = s->next;
	}
	return (i);
}
