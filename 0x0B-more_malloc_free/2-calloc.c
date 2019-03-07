#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array
 * using malloc
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	arr = malloc(sizeof(int) * nmemb * size);
	if (!arr)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;
	return (arr);
}
