#include "binary_trees.h"

/**
 * binary_tree_delete - function deletes an entire binary tree
 * @tree: a pointer to the root of the tree to delete
 *
 * Return: none
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
