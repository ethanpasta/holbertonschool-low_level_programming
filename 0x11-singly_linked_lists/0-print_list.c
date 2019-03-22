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
	const list_t *tmp;
	int i = 0;

	tmp = h;
	while (tmp)
	{
		if (tmp->str)
			printf("[%d] [%s]\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		i++;
		tmp = tmp->next;
	}
	return (i);
}
