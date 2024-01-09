#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node's value.
 *
 * Description: This function traverses a binary tree using pre-order traversal,
 *              which means it visits the root node first, then the left subtree,
 *              and finally the right subtree. For each node, it applies a given
 *              function to the node's value. If either the tree is NULL or the
 *              function pointer is NULL, the function does nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* If tree or func is NULL, do nothing */
	if (tree == NULL || func == NULL)
		return;

	/* First, process the root node */
	func(tree->n);

	/* Then, traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* Finally, traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
