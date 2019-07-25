#include "binary_trees.h"

/**
 * binary_tree_depth_help - function measures the depth of a
 * node in a binary tree
 * @tree: a pointer to the to measure the depth
 *
 * Return: depth of the node
 */
size_t binary_tree_depth_help(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_depth_help(tree->parent) + 1);
}

/**
 * binary_tree_depth - function measures the depth of a node in a binary tree
 * @tree: a pointer to the root
 *
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_depth_help(tree) - 1);
}
