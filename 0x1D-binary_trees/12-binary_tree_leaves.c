#include "binary_trees.h"

/**
 * binary_tree_leaves - function counts the leaves in a binary tree
 * @tree: pointer to the root
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count;

	if (!tree)
		return (0);
	count = 0;
	if (!tree->left && !tree->right)
		count++;
	count += binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (count);
}
