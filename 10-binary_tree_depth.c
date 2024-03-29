#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth if success, 0 if else
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(tree->parent))
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
