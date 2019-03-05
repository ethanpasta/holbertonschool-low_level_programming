#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - function creates an array of
 * characters and initializes in with a specific char
 * @size: size of the array to create
 * @c: char to copy
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
