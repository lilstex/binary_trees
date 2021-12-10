#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: A pointer to the node to find the uncle
 *
 * Return: If node is NULL or has no uncle, return NULL,
 *         else return a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return 0;
    if (node->parent->parent->left == node->parent)
        return node->parent->parent->right;
    else
        return node->parent->parent->left;
}