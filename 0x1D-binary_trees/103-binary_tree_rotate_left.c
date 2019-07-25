#include "binary_trees.h"

/**
 * first_available_to_left - function returns the most-left node that
 * isn't full
 * @tree: pointer to the root node
 *
 * Return: pointer to node
 */
binary_tree_t *first_available_to_left(binary_tree_t *tree)
{
	if (!tree->left)
		return (tree);
	if (!tree->right)
		return (tree);
	if (tree->left)
		first_available_to_left(tree->left);
	if (tree->right)
		first_available_to_left(tree->right);
	return (NULL);
}

/**
 * binary_tree_rotate_left - function perfoms a left-rotation
 * on a binary tree
 * @tree: pointer to the root node
 *
 * Return: a pointer to the new root node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root, *tmp_left = NULL, *tmp_available;

	if (!tree)
		return (NULL);
	if ((!tree->right && !tree->left) || (!tree->right && tree->left))
		return (tree);
	new_root = tree->right;
	if (new_root->left)
		tmp_left = new_root->left;
	new_root->parent = NULL;
	new_root->left = tree;
	tree->parent = new_root;
	tree->right = NULL;
	if (tmp_left)
	{
		tmp_available = first_available_to_left(new_root->left);
		if (!tmp_available->left)
			tmp_available->left = tmp_left;
		else
			tmp_available->right = tmp_left;
		tmp_left->parent = tmp_available;
	}
	return (new_root);
}
