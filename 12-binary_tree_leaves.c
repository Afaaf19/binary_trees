#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the nodes
 * @tree: pointer to the root node
 * Return: 0 if tree is NULL if not return the size
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_size = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
		/**
		 * ! tree->left == null && ! tree->right null
		 * ! may reavel some errors
		 */
	leaf_size = (binary_tree_leaves(tree->left) +
				  binary_tree_leaves(tree->right));
	return (leaf_size);
}
