#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree to analyze.
 *
 * Description: Calculates the number of leaf nodes in a binary tree. A leaf
 *              is defined as a node with no children. The function recursively
 *              counts leaf nodes in both the left and right subtrees. If the
 *              tree pointer is NULL, it returns 0, indicating the tree is
 *              either empty or does not exist.
 *
 * Return: The total number of leaf nodes in the tree. Returns 0 if the tree
 *         is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* Handle NULL tree case */
	if (!tree)
	{
		return (0);
	}

	/* Check for leaf node (no children) */
	if (!tree->left && !tree->right)
	{
		return (1);
	}

	/* Recursively count leaves in left and right subtrees */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
