#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * overwrite_key - function checks if a key already exists in the hash table
 * @h: head of list
 * @key: key to search for
 *
 * Return: index of key in list, or -1 if it doesn't exist
 */
int overwrite_key(hash_node_t *h, const char *key)
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
 * hash_table_set - function adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: value for the key
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *v, *k;
	hash_node_t *new;
	int exists;

	if (!key || !*key || !ht || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	k = strdup(key);
	v = strdup(value);
	exists = overwrite_key(ht->array[index], key);
	if (exists != -1)
	{
		new = getnode_index(ht->array[index], exists);
		free(new->value);
		new->value = v;
	}
	else if (add_node(&ht->array[index], k, v) == NULL)
		return (0);
	return (1);
}
