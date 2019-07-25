#include "binary_trees.h"

/**
 * every_node_different - function checks if every node in tree
 * is bigger/smaller than certain value
 * @tree: pointer to root
 * @value: value to compare to
 * @diff: 1 if comparison is greater, 0 if smaller
 *
 * Return: 1 if true, 0 otherwise
 */
int every_node_different(binary_tree_t *tree, int value, int diff)
{
	if (!tree)
		return (1);
	if (diff && tree->n <= value)
		return (0);
	else if (!diff && tree->n >= value)
		return (0);
	return (every_node_different(tree->left, value, diff)
		&& every_node_different(tree->right, value, diff));
}

/**
 * bst_help - function helper for 'binary_tree_is_bst'
 * @tree: pointer to tree root
 *
 * Return: 1 if valid bst, 0 otherwise
 */
int bst_help(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if ((tree->right && tree->right->n <= tree->n) ||
	    !every_node_different(tree->right, tree->n, 1))
		return (0);
	if ((tree->left && tree->left->n >= tree->n) ||
	    !every_node_different(tree->left, tree->n, 0))
		return (0);
	if (!bst_help(tree->left) || !bst_help(tree->right))
		return (0);
	return (1);
}

/**
 * binary_tree_is_bst - function checks if a binary tree is a
 * valid binary search tree
 * @tree: pointer to the root
 *
 * Return: 1 if valid bst, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (bst_help(tree));
}
