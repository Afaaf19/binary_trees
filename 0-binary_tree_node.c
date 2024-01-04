#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: parameter that refers to the parent node
 * @value: value to put in the new node
 * Return: pointer to the new node or NULL if fail
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n = NULL;

	new_n = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = value;
	new_n->parent = parent;
	new_n->left = NULL;
	new_n->right = NULL;

	return (new_n);
}
