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
	return (binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_is_complete_help - function helper
 * @tree: pointer to root
 * @index: index of current node
 * @size: number of nodes in tree
 *
 * Return: 1 if complete, 0 otherwise
 */
int binary_tree_is_complete_help(const binary_tree_t *tree,
				 int index, int size)
{
	if (!tree)
		return (1);
	if (index >= size)
		return (0);
	return (binary_tree_is_complete_help(tree->left, 2 * index + 1, size) &&
		binary_tree_is_complete_help(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_is_complete - function checks if a binary tree is "complete"
 * @tree: pointer to the root
 *
 * Return: 1 if complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_is_complete_help(tree, 0, binary_tree_size(tree)));
}
