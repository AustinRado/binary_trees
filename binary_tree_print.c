#include "binary_trees.h"

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
    if (tree != NULL)
    {
        binary_tree_print_recursive(tree, 0);
    }
}

/**
 * binary_tree_print_recursive - Recursively print the binary tree
 * @tree: Pointer to the current node
 * @level: Current level in the tree
 */
void binary_tree_print_recursive(const binary_tree_t *tree, int level)
{
    if (tree == NULL)
        return;

    binary_tree_print_recursive(tree->right, level + 1);

    for (int i = 0; i < level; i++)
        printf("    ");

    printf("%d\n", tree->n);

    binary_tree_print_recursive(tree->left, level + 1);
}
