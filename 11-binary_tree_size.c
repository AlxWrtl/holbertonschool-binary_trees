#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the node to begin size measurement from.
 *
 * Description: This function calculates the size of a binary tree, which is
 *              the total number of nodes in the tree. The
 *				size is determined by recursively
 *              summing the size of the left and right subtrees,
 *				adding 1 for the current node.
 *              If the tree is NULL, the size is 0.
 *
 * Return: The total number of nodes in the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	/* Base case: If the tree is NULL, size is 0 */
	if (!tree)
	{
		return (0);
	}
	/* Recursively calculate the size of the tree */
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
