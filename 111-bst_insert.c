#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a BST
 * @tree: double pointer to the root node
 * @value: value to store in the node to be inserted
 * If the address stored in tree is NULL,
 * the created node must become the root node.
 * If the value is already present in the tree, it must be ignored
 *
 * Return: pointer to the created node || NULL on failure
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	if (tree == NULL)
		return (NULL);

	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	if ((*tree)->n == value)
		return (NULL);

	if (value < (*tree)->n)
		return (bst_insert(&((*tree)->left), value));

	if (value > (*tree)->n)
		return (bst_insert(&((*tree)->right), value));

	return (NULL);
}
