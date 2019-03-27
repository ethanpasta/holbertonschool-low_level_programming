#include "lists.h"

/**
 * print_listint_safe - function prints a linked list
 * @head: head of list
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	long int diff;
	int count = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		diff = head - head->next;
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
