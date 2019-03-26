#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - function returns the number of
 * elements in a linked listint_t list
 * @h: head of list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * insert_nodeint_at_index - function inserts a new node at
 * a given position
 * @head: head of list
 * @idx: the index of the list where the new node should be added
 * @n: value of new node
 *
 * Return: address of new node, or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp = *head;

	if (idx > listint_len(*head))
		return (NULL);
	else if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
	}
	else
	{
		while (idx--)
		{
			if (idx == 0)
			{
				new = malloc(sizeof(listint_t));
				if (!new)
					return (NULL);
				new->n = n;
				new->next = tmp->next;
				tmp->next = new;
			}
			else
				tmp = tmp->next;
		}
	}
	return (new);
}
