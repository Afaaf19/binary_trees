#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a left child node
 * @parent: parent node
 * @value: value of the left node
 * Return: new left node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n;

	if (!parent)
		return (NULL);

	new_n = binary_tree_node(parent, value);

	if (!new_n)
		return (NULL);

	if (parent->left)
	{
		new_n->left = parent->left;
		new_n->left->parent = new_n;
	}

	parent->left = new_n;

	return (new_n);
}
