#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balace factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int bal_factor;

    if(tree == NULL)      
        return 0;    
    else
        bal_factor = (binary_tree_height(tree->left) - binary_tree_height(tree->right));
        return bal_factor;
}

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