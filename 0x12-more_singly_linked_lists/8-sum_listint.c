#include "lists.h"

/**
 * sum_listint - function returns the sum of all
 * the data of a listint_t linked list
 * @head: head of list
 *
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
