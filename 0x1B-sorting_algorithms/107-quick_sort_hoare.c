#include "sort.h"

/**
 * quick_sort_hoare - sorts an array with the Quicksort algorithm
 * @array: array of ints to sort
 * @size: size of the array
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_recursion(array, 0, (int)size - 1, size);
}

/**
 * quick_recursion - helper function for Quicksort
 * @array: array to sort
 * @left: index of the left element
 * @right: index of the right element
 * @size: size of the array
 */
void quick_recursion(int *array, int left, int right, size_t size)
{
	int piv;

	if (right - left > 0)
	{
		piv = partition(array, left, right, size);
		quick_recursion(array, left, piv, size);
		quick_recursion(array, piv + 1, right, size);
	}
}

/**
 * partition - gives a piv index for Quicksort
 * @array: array to find the piv in
 * @left: index of the left element
 * @right: index of the right element
 * @size: size of the array
 *
 * Return: the index of the piv element
 */
int partition(int *array, int left, int right, size_t size)
{
	int tmp, pivot = array[right];
	size_t i, j;

	i = left;
	j = right + 1;
	while (i < j)
	{
		while (array[i] < pivot)
			i++;
		while (array[j] > pivot)
			j--;
		if (i <= j)
		{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			print_array(array, size);
		}
	}
	return i;
}
