#include "binary_trees.h"

/**
 * binary_tree_insert_right - function inserts a node as the right child of
 * another node
 * @parent: a pointer to the node to insert the right child in
 * @value: value to store in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);
	tmp = binary_tree_node(parent, value);
	if (!tmp)
		return (NULL);
	if (parent->right)
	{
		parent->right->parent = tmp;
		tmp->right = parent->right;
	}
	parent->right = tmp;
	return (tmp);
}
