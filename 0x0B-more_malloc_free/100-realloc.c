#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: the old size of the memory block
 * @new_size: the size of the new memory block
 *
 * Return: pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *newptr, *oldptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
		return (NULL);
	if (!ptr)
		return malloc(new_size);
	oldptr = ptr;
	newptr = malloc(new_size);
	while (i < old_size && i < new_size)
	{
		newptr[i] = oldptr[i];
		i++;
	}
	free(ptr);
	return (newptr);
}
