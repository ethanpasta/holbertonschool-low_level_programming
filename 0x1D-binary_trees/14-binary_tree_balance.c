#include "binary_trees.h"

/**
 * binary_tree_height - function returns height of tree
 * @tree: pointer to root
 *
 * Return: height of tree
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

/**
 * binary_tree_balance - function measures the balance factor of a binary tree
 * @tree: a pointer to the root
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
