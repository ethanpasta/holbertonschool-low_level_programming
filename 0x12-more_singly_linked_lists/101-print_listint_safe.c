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
	long int diff;

	while (head)
	{
		diff = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (count);
}
