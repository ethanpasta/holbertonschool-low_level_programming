#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory using malloc
 * @b: size to allocate
 *
 * Return: pointer to memory space, or 98 is malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
