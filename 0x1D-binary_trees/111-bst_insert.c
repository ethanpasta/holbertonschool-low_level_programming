#include "binary_trees.h"

/**
 * bst_insert - function inserts a value in a binary search tree
 * @tree: double pointer to the root node
 * @value: value to store in the node to be inserted
 *
 * Return: a pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new = NULL;

	if (!tree)
		return (NULL);
	if (!*tree)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	if (value < (*tree)->n)
	{
		if (!(*tree)->left)
		{
			new = binary_tree_node((*tree), value);
			(*tree)->left = new;
			return (new);
		}
		return (bst_insert(&(*tree)->left, value));
	}
	else if (value > (*tree)->n)
	{
		if (!(*tree)->right)
		{
			new = binary_tree_node((*tree), value);
			(*tree)->right = new;
			return (new);
		}
		return (bst_insert(&(*tree)->right, value));
	}
	return (NULL);
}
