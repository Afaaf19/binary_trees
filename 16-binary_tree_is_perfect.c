#include "binary_trees.h"

size_t binary_height(const binary_tree_t *tree);
size_t binary_size(const binary_tree_t *tree);

/**
 * binary_height - function that gives the height of a binary tree
 * @tree: pointer to the root node of the tree to check
 * Return: height of tree, 0 if tree is NULL
 */
size_t binary_height(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;


	if (tree == NULL)
		return (0);

	l_height = tree->left ? 1 + binary_height(tree->left) : 0;
	r_height = tree->right ? 1 + binary_height(tree->right) : 0;

	return ((l_height > r_height ? l_height : r_height));
}

/**
 * binary_size - function that gives the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of the tree, or 0 if tree is NULL
*/
size_t binary_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_size(tree->left) + binary_size(tree->right));
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not perfect or tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0, size = 0, perf_size = 0;

	if (tree == NULL)
		return (0);
	height = binary_height(tree);
	size = binary_size(tree);

	perf_size = (2 << height) - 1;
	if (perf_size == size)
		return (1);
	return (0);
}
