#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child in a binary tree.
 * @tree: Pointer to the root node of the tree to count the nodes of.
 *
 * Description: This function recursively traverses the binary tree and counts
 *              all nodes that have at least one child (either left or right). It sums up the
 *              counts from the left and right subtrees and adds one for the current node if
 *              it has a child. The function returns 0 for a NULL node.
 *
 * Return: The total number of nodes with at least one child in the tree.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* Base case: If the tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Count nodes with at least one child */
	if (tree->left != NULL && tree->right != NULL)
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	else if (tree->left)
	{
		return (binary_tree_nodes(tree->left) + 1);
	}
	else if (tree->right)
	{
		return (binary_tree_nodes(tree->right) + 1);
	}

	/* If the node has no children, continue the recursion without adding */
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
