#include "binary_trees.h"

/**
 * binary_tree_height - function measures the height of a binary tree
 * @tree: a pointer to the root
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int max_left, max_right;

	if (!tree)
		return (-1);
	max_left = binary_tree_height(tree->left);
	max_right = binary_tree_height(tree->right);
	if (max_left > max_right)
		return (max_left + 1);
	return (max_right + 1);
}
