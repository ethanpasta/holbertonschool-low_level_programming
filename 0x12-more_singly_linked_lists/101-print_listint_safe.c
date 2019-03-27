#include "lists.h"

/**
 * print_listint_safe - function prints a listint_t linked list
 * @head: head of list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	long int diff;
	int count = 0;

	while (head)
	{
		diff = head - head->next;
		if (diff > 0)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (count);

}
