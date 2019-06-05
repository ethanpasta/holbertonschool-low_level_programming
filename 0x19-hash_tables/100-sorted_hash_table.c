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
	shash_table_t *table;

	table = calloc(1, sizeof(shash_table_t));
	table->size = size;
	if (!table)
		return (NULL);
	table->array = calloc(size, sizeof(shash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	return (table);
}

/**
 * insert_sorted_list - functions adds node 'new' to sorted list
 * @ht: hash table
 * @new: node to add
 *
 * Return: none
 */
void insert_sorted_list(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *head = ht->shead;

	if (!head || strcmp(head->key, new->key) >= 0)
	{
		new->snext = head;
		ht->shead = new;
		if (head)
			head->sprev = new;
		else
			ht->stail = new;
		return;
	}
	while (head->snext && strcmp(head->snext->key, new->key) <= 0)
		head = head->snext;
	new->sprev = head;
	new->snext = head->snext;
	if (!head->snext)
		ht->stail = new;
	else
		head->snext->sprev = new;
	head->snext = new;
}

/**
 * add_new_node - function adds a new node to the hash table array
 * at a certain index
 * @ht: the hash table struct
 * @idx: index in array to add node
 * @k: key
 * @v: value
 *
 * Return: 1 on success, 0 otherwise
 */
int add_new_node(shash_table_t *ht, unsigned long int idx, char *k, char *v)
{
	shash_node_t *new;

	new = calloc(1, sizeof(shash_node_t));
	if (!new)
	{
		shash_table_delete(ht);
		return (0);
	}
	new->key = k;
	new->value = v;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	insert_sorted_list(ht, new);
	return (1);
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
	shash_node_t *h;

	if (!key || !*key || !ht || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	v = strdup(value);
	if (!v)
	{
		shash_table_delete(ht);
		return (0);
	}
	h = ht->array[index];
	while (h)
	{
		if (!strcmp(h->key, key))
		{
			free(h->value);
			h->value = v;
			return (1);
		}
		h = h->next;
	}
	k = strdup(key);
	if (!k)
	{
		free(v);
		shash_table_delete(ht);
		return (0);
	}
	if (!add_new_node(ht, index, k, v))
	{
		free(k);
		free(v);
		return (0);
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

	if (!ht)
		return;
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
	ht->array = NULL;
	free(ht);
	ht = NULL;
}
