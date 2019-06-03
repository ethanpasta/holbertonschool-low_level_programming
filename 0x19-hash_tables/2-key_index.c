#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * key_index - function finds index in hash table based on djb2 algorithm
 * @key: key to find hash key with
 * @size: size of hash table
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
