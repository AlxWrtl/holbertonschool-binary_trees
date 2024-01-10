#include "binary_trees.h"

/**
 * binary_tree_node - Allocates and initializes a new binary tree node.
 * @parent: Pointer to the parent node of the node to create.
 * @value: The integer value to store in the new node.
 *
 * Descriptions: This function performs memory allocation
 *				for a new node in a
 *              binary tree and sets its value. The new node's
 *				parent is assigned, and its
 *              child pointers are initialized to NULL,
 *				indicating it has no children.
 *              If memory allocation fails, the function safely
 *				returns NULL.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
