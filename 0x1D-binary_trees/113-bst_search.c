#include "binary_trees.h"

/**
 * bst_search - function searches for a value in a binary search tree
 * @tree: a pointer to the root
 * @value: the value to search in the tree
 *
 * Return: a pointer to the noode containing a value equal to 'value', or NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	if (value > tree->n)
		return (bst_search(tree->right, value));
	else if (value < tree->n)
		return (bst_search(tree->left, value));
	return ((bst_t *)tree);
}
