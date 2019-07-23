#include "binary_trees.h"

/**
 * first_available_to_right - function returns the most-right node that
 * isn't full
 * @tree: pointer to the root node
 *
 * Return: pointer to node
 */
binary_tree_t *first_available_to_right(binary_tree_t *tree)
{
	if (!tree->right || !tree->left)
		return (tree);
	if (tree->left)
		first_available_to_right(tree->right);
	if (tree->right)
		first_available_to_right(tree->left);
	return (NULL);
}

/**
 * binary_tree_rotate_right - function perfoms a right-rotation
 * on a binary tree
 * @tree: pointer to the root node
 *
 * Return: a pointer to the new root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root, *tmp_right = NULL, *tmp_available;

	if (!tree)
		return (NULL);
	new_root = tree->left;
	if (new_root->right)
		tmp_right = new_root->right;
	new_root->parent = NULL;
	new_root->right = tree;
	tree->parent = new_root;
	tree->left = NULL;
	if (tmp_right)
	{
		tmp_available = first_available_to_right(new_root->right);
		if (!tmp_available->right)
			tmp_available->right = tmp_right;
		else
			tmp_available->left = tmp_right;
		tmp_right->parent = tmp_available;
	}
	return (new_root);
}
