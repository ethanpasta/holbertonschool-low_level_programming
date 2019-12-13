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
	if (!head)
		return (0);
	return sum_listint(head->next) + head->n;
}
