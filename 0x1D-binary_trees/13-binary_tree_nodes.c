#include "binary_trees.h"

/**
 * binary_tree_nodes - function counts the nodes with at least 1 child
 * @tree: pointer to the root node
 *
 * Return: count of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count;

	if (!tree)
		return (0);
	count = 0;
	if (tree->left || tree->right)
		count++;
	count += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (count);
}
