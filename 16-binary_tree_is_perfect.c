#include "binary_trees.h"

/**
 * tree_height - Calculates the height of a binary tree.
 * @tree: Pointer to the root node of the binary tree.
 *
 * Description: Computes the height by recursively finding the greater height
 *              of the left and right subtrees and adding one to it.
 *
 * Return: Height of the tree as a size_t value. Returns 0 if tree is NULL.
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	/* Check if the tree is NULL */
	if (tree == NULL)
		return (0);

	/* Recursively calculate height of left and right subtrees */
	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	/* Return the greater of the two heights plus one */
	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * is_perfect_rec - Recursively checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the subtree.
 * @d: The depth of the tree.
 * @level: Current level in the tree during recursion.
 *
 * Description: Checks for a perfect binary tree where all internal nodes have
 *              two children and all leaves are at the same depth.
 *
 * Return: 1 if subtree is perfect, 0 otherwise.
 */
int is_perfect_rec(const binary_tree_t *tree, int d, int level)
{
	/* Check for NULL tree */
	if (tree == NULL)
		return (1);

	/* Check for leaf node and compare its level with depth */
	if (tree->left == NULL && tree->right == NULL)
		return ((d == level + 1));

	/* Check for missing children */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Recursively check left and right subtrees */
	return (is_perfect_rec(tree->left, d, level + 1) &&
			is_perfect_rec(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the binary tree.
 *
 * Description: Determines if a binary tree is perfect by calculating the depth
 *              using tree_height and then using is_perfect_rec to check if
 *              all levels are filled and all leaves are at the same depth.
 *
 * Return: 1 if the tree is perfect, 0 otherwise. Returns 0 for NULL tree.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/* Calculate the depth of the tree */
	int d = tree_height(tree);

	/* Use recursive helper function to check if tree is perfect */
	return (is_perfect_rec(tree, d, 0));
}
