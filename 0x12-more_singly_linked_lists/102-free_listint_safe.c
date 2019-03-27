#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - function frees a list
 * @h: head of list
 *
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t count = 0;
	long int diff;

	while (*h)
	{
		count++;
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}
	*h = NULL;
	return (count);
}
