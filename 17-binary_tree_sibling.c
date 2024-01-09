#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a given node in a binary tree.
 * @node: Pointer to the node to find the sibling of.
 *
 * Description: This function returns a pointer to the sibling of a given node.
 *              A sibling is defined as the other child of the same parent. The function checks
 *              if the node exists and has a parent. If the node is the left child, the function
 *              returns the right child, and vice versa. If the node has no parent or no sibling,
 *              the function returns NULL.
 *
 * Return: Pointer to the sibling node, or NULL if there is no sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Check if node is NULL or has no parent */
	if (!node || !node->parent)
	{
		return (NULL);
	}
	/* If node is the left child, return the right child */
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	/* If node is the right child, return the left child */
	if (node->parent->right == node)
	{
		return (node->parent->left);
	}
	/* If node has no sibling */
	return (NULL);
}
