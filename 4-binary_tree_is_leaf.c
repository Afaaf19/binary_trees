#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if node is leaf
 * @node: node to be checked
 * Return: returns 1 if leaf, 0 if else
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (node->left == NULL && node->right == NULL);
}
