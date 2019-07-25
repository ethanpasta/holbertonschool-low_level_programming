#include "binary_trees.h"

/**
 * binary_tree_height - function returns the height of a binary tree
 * @tree: pointer to root
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int max_left, max_right;

	if (!tree)
		return (0);
	max_left = binary_tree_height(tree->left);
	max_right = binary_tree_height(tree->right);
	if (max_left > max_right)
		return (max_left + 1);
	return (max_right + 1);
}

/**
 * binary_tree_balance - function returns the balance of a binary tree
 * @tree: pointer to root
 *
 * Return: balance of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_is_full - function checks if a binary tree is full
 * @tree: pointer to root
 *
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}

/**
 * binary_tree_is_perfect - function checks if a binary tree is perfect
 * @tree: pointer to the root node
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0)
		return (1);
	return (0);
}
