#include "binary_trees.h"

/**
 * binary_tree_depth - function measures the depth of a node in a binary tree
 * @tree: a pointer to the to measure the depth
 *
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);
	return (binary_tree_depth(tree->parent) + 1);
}

/**
 * binary_trees_ancestor - function finds the lowest common ancestor
 * of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: a pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	if (!first || !second || (!first->parent && !second->parent))
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	if (first->parent == second)
		return ((binary_tree_t *)second);
	if (second->parent == first)
		return ((binary_tree_t *)first);
	if (binary_tree_depth(first) >= binary_tree_depth(second))
		return (binary_trees_ancestor(first->parent, second));
	else
		return (binary_trees_ancestor(first, second->parent));
}
