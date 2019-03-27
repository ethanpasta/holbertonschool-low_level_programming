#include "lists.h"

/**
 * print_listint_safe - function prints a listint_t linked list
 * @head: head of list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	long int check;

	while (head)
	{
		count++;
		check = head - head->next;
		if (check > 0)
			printf("[%p] %d\n", (void *)head, head->n);
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		head = head->next;
	}
	return (count);
}
