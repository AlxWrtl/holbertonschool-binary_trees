#include "binary_trees.h"

/**
 * binary_tree_depth - Calculates the depth of a node in a binary tree.
 * @tree: Pointer to the node whose depth is to be determined.
 *
 * Description: This function determines a node's depth in a binary tree.
 *              Depth is the number of edges from the node to the root.
 *              The function uses recursion to traverse from the node to
 *              the root. If tree is NULL or the node is the root
 *              (tree->parent is NULL), the depth is 0. This indicates
 *              either an empty tree or that the node is at the root level.
 *
 * Return: The depth of the node as a size_t value. Returns 0 if the node is
 *         the root or if the tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* Check for NULL tree or if the node is the root */
	if (tree == NULL || tree->parent == NULL)
		return (0);

	/* Recursively calculate depth, adding 1 for each level above */
	return (1 + binary_tree_depth(tree->parent));
}
