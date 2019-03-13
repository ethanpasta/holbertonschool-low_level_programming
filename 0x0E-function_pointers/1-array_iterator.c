#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function executes a function given
 * as a parameter on each element of an array
 * @array: array of elements
 * @size: size of the array
 * @action: given function
 *
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
