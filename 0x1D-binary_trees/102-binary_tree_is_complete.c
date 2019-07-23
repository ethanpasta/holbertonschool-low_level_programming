#include "binary_trees.h"

/**
 * binary_tree_size - function measures the size of a binary tree
 * @tree: a pointer to the root node of the tree
 *
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_is_complete - function checks if a binary tree is "complete"
 * @tree: pointer to the root
 *
 * Return: 1 if complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t **arr;
	binary_tree_t *tmp;
	int start = 0, size, index = start, flag = 0;

	size = binary_tree_size(tree);
	arr = malloc(sizeof(binary_tree_t *) * size);
	if (!arr)
		return (0);
	arr[start] = (binary_tree_t *)tree;
	index++;
	while (start < size)
	{
		tmp = arr[start];
		if ((flag && (tmp->left || tmp->right)) || (tmp->right && !tmp->left))
		{
			free(arr);
			return (0);
		}
		start++;
		if (tmp->left)
		{
			arr[index] = tmp->left;
			index++;
		}
		else
			flag = 1;
		if (tmp->right)
		{
			arr[index] = tmp->right;
			index++;
		}
		else
			flag = 1;
	}
	return (1);
	free(arr);
}
