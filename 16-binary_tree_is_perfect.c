#include "binary_trees.h"

/**
 * depth - Calculates the depth of the leftmost node in a binary tree.
 * @node: Pointer to the node from which the depth is measured.
 *
 * Description: Computes the depth of the leftmost node in a binary tree,
 *              incrementing a depth counter while traversing the left subtree.
 *
 * Return: The depth of the tree as an integer.
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	/* Handle NULL tree case */
	if (tree == NULL)
		return (0);

	/* Calculate height of left and right subtrees */
	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	/* Return the greater  height plus one */
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
