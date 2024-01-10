#include "binary_trees.h"

/**
 * tree_height - Calculates the height of a binary tree.
 * @tree: Pointer to the root node of the binary tree.
 *
 * Description: Computes the height of a binary tree. The height is the number
 *              of edges on the longest path from the root to a leaf node. It
 *              recursively calculates the height of the left and right subtrees
 *              and returns the greater of the two, incremented by one to account
 *              for the current node. A NULL tree is considered to have a height
 *              of 0.
 *
 * Return: The height of the binary tree as a size_t. Returns 0 for a NULL tree.
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	/* Check if the tree is NULL, return 0 if true */
	if (tree == NULL)
		return (0);

	/* Recursively calculate the height of the left subtree */
	left_height = tree_height(tree->left);

	/* Recursively calculate the height of the right subtree */
	right_height = tree_height(tree->right);

	/* Return the greater of the two heights, incremented by one */
	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * is_perfect_rec - Helper function to check if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree.
 * @d: The depth of the tree.
 * @level: Current level in the tree during traversal.
 *
 * Description: Checks if a binary tree is perfect, where all levels are
 *              completely filled and all leaves are at the same level.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int is_perfect_rec(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return ((d == level + 1));

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_rec(tree->left, d, level + 1) &&
			is_perfect_rec(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the binary tree.
 *
 * Description: Determines if a binary tree is perfect by calculating the
 *              depth and using a recursive helper function. Checks if all
 *              levels are filled and all leaves are at the same depth.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = tree_height(tree);

	return (is_perfect_rec(tree, d, 0));
}
