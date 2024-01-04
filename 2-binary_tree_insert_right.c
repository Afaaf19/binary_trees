#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts right node
 * @parent: parent node
 * @value: value of the right node
 * Return: new right node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n;

	if (!parent)
		return (null);

	new_n = binary_tree_node(parent, value);

	if (!new_n)
		return (NULL);

	if (parent->right)
	{
		new_n->right = parent->right;
		new_n->right->parent = new_n;
	}

	parent->right = new_n;

	return (new_n);
}
