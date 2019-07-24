#include "binary_trees.h"

/**
 * array_to_bst - function buils a binary search tree from an array
 * @array: a pointer to the first element of the array
 * @size: number of elements in the array
 *
 * Return: a pointer to the root node of the binary search tree
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *new_tree = NULL, *tmp;

	if (!array)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		tmp = bst_insert(&new_tree, array[i]);
		if (!tmp)
			return (NULL);
	}
	return (new_tree);
}
