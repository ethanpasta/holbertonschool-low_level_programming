#include "binary_trees.h"

/**
 * binary_tree_height_help - function measures the height of a binary tree
 * @tree: a pointer to the root
 *
 * Return: height of the tree
 */
size_t binary_tree_height_help(const binary_tree_t *tree)
{
	int max_left, max_right, max;

	if (!tree)
		return (0);
	max_left = binary_tree_height_help(tree->left);
	max_right = binary_tree_height_help(tree->right);
	if (max_left > max_right)
		max = max_left;
	else
		max = max_right;
	return (max + 1);
}

/**
 * binary_tree_height - function measures the height of a binary tree
 * @tree: a pointer to the root
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height_help(tree) - 1);
}
