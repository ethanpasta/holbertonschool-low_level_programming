#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_print - function prints a hash table
 * @ht: the hash table
 *
 * Return: none
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int comma = 0;
	hash_node_t *tmpL;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmpL = ht->array[i];
		while (tmpL)
		{
			if (comma)
				printf(", idx: %lu : '%s': '%s'", i, tmpL->key, tmpL->value);
			else
			{
				comma = 1;
				printf("'%s': '%s'", tmpL->key, tmpL->value);
			}
			tmpL = tmpL->next;
		}
	}
	printf("}\n");
}
