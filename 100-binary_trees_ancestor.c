#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the LCA || NULL on failure
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *leftLCA, *rightLCA;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return (first);

	leftLCA = binary_trees_ancestor(first->left, second);
	rightLCA = binary_trees_ancestor(first->right, second);

	if (leftLCA != NULL && rightLCA != NULL)
		return (first);

	return ((leftLCA != NULL) ? leftLCA : rightLCA);
}
