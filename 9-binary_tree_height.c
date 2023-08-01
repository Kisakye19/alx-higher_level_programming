#include "binary_trees.h"

/**
 * binary_tree_height -measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftheight, rightheight;

	if (tree == NULL)
		return (0);

	leftheight = binary_tree_height(tree->left);
	rightheight = binary_tree_height(tree->right);

	return (leftheight > rightheight ? leftheight + 1 : rightheight + 1);
}
