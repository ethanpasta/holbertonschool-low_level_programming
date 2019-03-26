#include "lists.h"

/**
 * reverse_listint - function reverses a listint_t list
 * @head: head of list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre, *cur;

	if (!head || !*head)
		return (NULL);
	pre = *head;
	cur = (*head)->next;
	if (cur == NULL)
		return (*head);
	reverse_listint(&cur);
	pre->next->next = pre;
	pre->next = NULL;
	*head = cur;
	return (*head);
}
