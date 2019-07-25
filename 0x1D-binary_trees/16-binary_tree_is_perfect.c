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
 * binary_tree_is_perfect - function checks if a binary tree is perfect
 * @tree: pointer to the root node
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size;

	if (!tree)
		return (0);
	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	if ((unsigned)(1 << height) - 1 == size)
		return (1);
	return (0);
}
