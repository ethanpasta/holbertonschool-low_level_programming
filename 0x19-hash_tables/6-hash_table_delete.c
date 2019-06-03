#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_delete - function deletes a hash table
 * @ht: the hash table
 *
 * Return: none
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *tmp1;

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
