#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 *
 * Return: If node is NULL or parent is NULL, return NULL, 
 *         if node has no sibling return NULL,
 *         else return a pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return 0;
    if (node->parent->left == node)
        return node->parent->right;
    else
        return node->parent->left;
}