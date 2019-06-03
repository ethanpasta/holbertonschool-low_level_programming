#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - function returns number of elements
 * in a linked list_t list
 * @h: head of linked list
 *
 * Return: number of elements
 */
size_t list_len(const hash_node_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

/**
 * add_node - function adds a new node at the beginning
 * of a list_t list
 * @head: head of list
 * @str: string to use
 *
 * Return: address of the new element, or NULL on failure
 */
hash_node_t *add_node(hash_node_t **head, char *key, char *val)
{
	hash_node_t *new;

	if (!key || !val || !head)
		return (NULL);
 	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = key;
	new->value = val;
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * free_list - function frees a list_t list
 * @head: head of the list
 *
 * Return: none
 */
void free_list(hash_node_t *head)
{
	hash_node_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = tmp;
	}
}
/**
 * get_nodeint_at_index - function returns the nth
 * node of a listint_t linked list
 * @head: head of list
 * @index: index of node to find
 *
 * Return: address of node, or NULL on failure
 */
hash_node_t *getnode_index(hash_node_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (i != index && head)
	{
		i++;
		head = head->next;
	}
	if (i != index)
		return (NULL);
	return (head);
}
