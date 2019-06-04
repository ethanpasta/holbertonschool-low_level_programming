#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * shash_table_create - function creates an empty hash table
 * @size: size of the table
 *
 * Return: address of table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *table;

	table = malloc(sizeof(shash_table_t));
	if (!table)
		return (NULL);
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (!table->array)
		return (NULL);
	table->size = size;
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

/**
 * soverwrite_key - function checks if a key already exists in the hash table
 * @h: head of list
 * @key: key to search for
 *
 * Return: index of key in list, or -1 if it doesn't exist
 */
int soverwrite_key(shash_node_t *h, const char *key)
{
	int i;

	for (i = 0; h; i++)
	{
		if (strcmp(h->key, key) == 0)
			return (i);
		h = h->next;
	}
	return (-1);
}

/**
 * sgetnode_index - function returns the nth
 * node of a listint_t linked list
 * @head: head of list
 * @index: index of node to find
 *
 * Return: address of node, or NULL on failure
 */
shash_node_t *sgetnode_index(shash_node_t *head, unsigned int index)
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

/**
 * insert_sorted_list - functions adds node 'new' to sorted list
 * @table: hash table
 * @new: node to add
 *
 * Return: none
 */
void insert_sorted_list(shash_table_t *table, shash_node_t *new)
{
	shash_node_t *tmp = table->shead;

	if (!table->shead)
	{
		table->shead = new;
		table->stail = new;
		return;
	}
	if (strcmp(table->shead->key, new->key) >= 0)
	{
		table->shead->sprev = new;
		new->snext = table->shead;
		table->shead = new;
	}
	else
	{
		while (tmp->snext && strcmp(tmp->snext->key, new->key) < 0)
			tmp = tmp->snext;
		if (tmp->snext == NULL)
		{
			new->sprev = tmp;
			tmp->snext = new;
			table->stail = new;
		}
		else
		{
			new->snext = tmp->snext;
			new->sprev = tmp;
			tmp->snext->sprev = new;
		}
	}
}

/**
 * shash_table_set - function adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: value for the key
 *
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *v, *k;
	shash_node_t *new;
	int exists;

	if (!key || !*key || !ht || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	v = strdup(value);
	exists = soverwrite_key(ht->array[index], key);
	if (exists != -1)
	{
		new = sgetnode_index(ht->array[index], exists);
		free(new->value);
		new->value = v;
	}
	else
	{
		new = malloc(sizeof(shash_node_t));
		if (!new)
			return (0);
		k = strdup(key);
		new->key = k;
		new->value = v;
		new->sprev = NULL;
		new->snext = NULL;
		new->next = ht->array[index];
		ht->array[index] = new;
		insert_sorted_list(ht, new);
	}
	return (1);
}

/**
 * shash_table_get - function retrieves a value associated with a key
 * @ht: the hash table
 * @key: key to look for
 *
 * Return: value associated with key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (!key || !*key || !ht)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - function prints a hash table
 * @ht: the hash table
 *
 * Return: none
 */
void shash_table_print(const shash_table_t *ht)
{
	int comma = 0;
	shash_node_t *tmp = ht->shead;

	if (!ht)
		return;
	printf("{");
	while (tmp)
	{
		if (comma)
			printf(", '%s': '%s'", tmp->key, tmp->value);
		else
		{
			comma = 1;
			printf("'%s': '%s'", tmp->key, tmp->value);
		}
		tmp = tmp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function prints a hash table in reverse
 * @ht: the hash table
 *
 * Return: none
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int comma = 0;
	shash_node_t *tmp = ht->stail;

	if (!ht)
		return;
	printf("{");
	while (tmp)
	{
		if (comma)
			printf(", '%s': '%s'", tmp->key, tmp->value);
		else
		{
			comma = 1;
			printf("'%s': '%s'", tmp->key, tmp->value);
		}
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - function deletes a hash table
 * @ht: the hash table
 *
 * Return: none
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp, *tmp1;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			tmp1 = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = tmp1;
		}
		ht->array[i] = NULL;
	}
	free(ht->array);
	free(ht);
}
