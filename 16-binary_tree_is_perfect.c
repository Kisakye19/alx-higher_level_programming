#include "binary_trees.h"

/**
 * binary_tree_height - calculate height of a binary tree
 * @tree: pointer to the root node
 * Return: 0 on failure || height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftheight = 0;
	size_t rightheight = 0;

	if (tree == NULL)
		return (0);

	leftheight += 1 + binary_tree_height(tree->left);
	rightheight += 1 + binary_tree_height(tree->right);

	if (leftheight > rightheight)
		return (leftheight);
	else
		return (rightheight);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t leftheight, rightheight;

	if (tree == NULL)
		return (0);

	leftheight = binary_tree_height(tree->left);
	rightheight = binary_tree_height(tree->right);

	return (leftheight - rightheight);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node
 *
 * full means a node has either zero or two children
 *
 * Return: 0 if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* node has no children */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* if node has two children continue checking recursively */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	/* if node has only one child it's not full */
	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 * is perfect if all internal nodes have 2 children & all leaves are at the
 * same level
 *
 * Return: 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((binary_tree_is_full(tree) == 1) &&
			(binary_tree_balance(tree) == 0))
		return (1);
	return (0);
}
