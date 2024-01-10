#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Description: A binary tree is full if every node has either
 *				zero or two children.
 *              This function checks if the tree is full by
 *				recursively verifying each node.
 *              If a node has both left and right children,
 *				the function continues to check
 *              recursively. If a node has only one child or the
 *				tree is NULL, it's not a full tree.
 *
 * Return: 1 if the tree is full, 0 if it's not or the tree is NULL.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	/* Base case: If tree is NULL, it's not full */
	if (tree == NULL)
	{
		return (0);
	}
	/* Leaf node case: if a node has no children, it's a full tree at this node */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	/* Recursive case: check if both left and right subtrees are full */
	if ((tree->left) && (tree->right))
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	/* If a node has only one child, it's not a full tree */
	return (0);
}
