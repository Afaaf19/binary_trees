#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if node is root
 * @node: node to be checked
 * Return: returns 1 if root, 0 if else
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (node->parent == NULL);
}
