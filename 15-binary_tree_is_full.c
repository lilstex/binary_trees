#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, return 0, else 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if(tree == NULL)      
        return 0;    
    else
        if(tree->left == NULL && tree->right == NULL)
            return 1;
        if(tree->left && tree->right) 
            return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}