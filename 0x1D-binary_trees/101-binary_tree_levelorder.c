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
 * binary_tree_levelorder - function goes through a binary tree using
 * level-order traversal
 * @tree: pointer to the root
 * @func: pointer to the function to call for each node
 *
 * Return: none
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t **arr;
	binary_tree_t *tmp;
	int start = 0, size, index = start;

	if (!tree || !func)
		return;
	size = binary_tree_size(tree);
	arr = malloc(sizeof(binary_tree_t *) * size);
	if (!arr)
		return;
	arr[start] = (binary_tree_t *)tree;
	index++;
	while (start < size)
	{
		tmp = arr[start];
		func(tmp->n);
		start++;
		if (tmp->left)
		{
			arr[index] = tmp->left;
			index++;
		}
		if (tmp->right)
		{
			arr[index] = tmp->right;
			index++;
		}
	}
	free(arr);
}
