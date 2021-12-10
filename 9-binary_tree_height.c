#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
        return 0;
	
    size_t l , r;

    l = binary_tree_height(tree->left);
    r = binary_tree_height(tree->right);
    if (l > r)
        return l + 1;
    else
        return r + 1;	
}