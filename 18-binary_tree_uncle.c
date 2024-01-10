#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: Pointer to the node to find the uncle of.
 *
 * Description: This function finds the uncle of a given node in a binary tree.
 *              An uncle is defined as the sibling of the node's parent. The
 *              function checks if the node, its parent, or grandparent is NULL
 *              If so, it returns NULL. Otherwise, it returns the node's uncle.
 *
 * Return: Pointer to the uncle node, or NULL if not found or if node is NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* Check if node, its parent, or grandparent is NULL */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL); /* Return NULL if any are NULL */
	}

	/* Determine if the parent is the left child of the grandparent */
	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right); /* Return right child (uncle) */
	}
	else
	{
		return (node->parent->parent->left); /* Otherwise, return left child */
	}
}
