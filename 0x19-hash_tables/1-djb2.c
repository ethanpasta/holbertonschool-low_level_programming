#include "hash_tables.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * hash_djb2 - function produces a hash key based on a string
 * @str: string to use
 *
 * Return: hash key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
