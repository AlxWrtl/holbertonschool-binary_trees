# Binary Tree Project

## Overview

This project is centered around the implementation and exploration of binary trees in C programming. It demonstrates key concepts like tree creation, node insertion, and traversal methods, focusing on binary search trees (BSTs).

## Features

- **Binary Tree Creation:** Initializes an empty binary tree.
- **Node Insertion:** Inserts nodes into the tree while maintaining BST properties.
- **Inorder Traversal:** Traverses the tree in an inorder manner, printing elements in sorted order.

## Functions ＼(٥⁀▽⁀ )／

- `void binary_tree_print(const binary_tree_t *tree);`  
  Visually represents a binary tree, enhancing understanding of its structure.

- `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`  
  Creates a new node in a binary tree, setting a value and linking to a parent.

- `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`  
  Inserts a new node as the left-child of an existing node, expanding the tree.

- `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`  
  Grows the tree by adding a new node as the right-child of an existing node.

- `void binary_tree_delete(binary_tree_t *tree);`  
  Completely erases a binary tree, freeing up memory space.

- `int binary_tree_is_leaf(const binary_tree_t *node);`  
  Determines if a node is a leaf, meaning it has no children.

- `int binary_tree_is_root(const binary_tree_t *node);`  
  Identifies if a node is the root, the very foundation of the binary tree.

- `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`  
  Traverses the tree in pre-order, processing nodes in a root-left-right sequence.

- `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`  
  In-order traversal, exploring nodes in a left-root-right sequence.

- `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`  
  Post-order traversal, visiting nodes in a left-right-root order, useful for certain computations.

- `size_t binary_tree_height(const binary_tree_t *tree);`  
  Calculates how tall the binary tree is, from root to the deepest leaf.

- `size_t binary_tree_depth(const binary_tree_t *tree);`  
  Finds how deep a node is within the binary tree structure.

- `size_t binary_tree_size(const binary_tree_t *tree);`  
  Totals up the number of nodes in the binary tree, giving an idea of its size.

- `size_t binary_tree_leaves(const binary_tree_t *tree);`  
  Counts all leaf nodes, which are the nodes without any children.

- `size_t binary_tree_nodes(const binary_tree_t *tree);`  
  Tallys the nodes that have at least one child, distinguishing them from leaves.

- `int binary_tree_balance(const binary_tree_t *tree);`  
  Provides the balance factor, indicating how balanced the tree is.

- `int binary_tree_is_full(const binary_tree_t *tree);`  
  Checks whether every node in the tree has either two or no children.

- `int binary_tree_is_perfect(const binary_tree_t *tree);`  
  Determines if the tree is perfect, where all interior nodes have two children and all leaves are at the same level.

- `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`  
  Locates the sibling node, the other child of the same parent.

- `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`  
  Finds the uncle node, which is the sibling of the node's parent.

## Getting Started (づ ◕‿◕ )づ

### Prerequisites

- A C compiler, such as GCC.
- Basic understanding of C programming and data structures.

### Installation

1. Clone the repository: `git clone [repository-link]`.
2. Navigate to the project directory.
3. Compile the code: `gcc main.c -o binary_tree`.

### Running the Program

Execute the compiled program:

```bash
./binary_tree
