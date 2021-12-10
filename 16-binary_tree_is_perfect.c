#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL, function must return 0, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    int depth = 0;
    while(tree != NULL)
    {
        depth++;
        tree = tree->left;
    }
    return depth;
	
}

/**
 * isPerfectRec - Tests if the binary tree is perfect or not.
 * @tree: A pointer to the node to check if its perfect or not.
 *
 * Return: If tree is NULL, return 0, else 1.
 */
int isPerfectRec(const binary_tree_t *tree, int depth, int level) 
{ 
    // An empty tree is perfect 
    if (tree == NULL) 
        return 0; 
  
    // If leaf node, then its depth must be same as depth of all other leaves. 
    if (tree->left == NULL && tree->right == NULL) 
        return (depth == level+1); 
  
    // If internal node and one child is empty 
    if (tree->left == NULL || tree->right == NULL) 
        return 0; 
  
    // Left and right subtrees must be perfect. 
    return isPerfectRec(tree->left, depth, level+1) && 
           isPerfectRec(tree->right, depth, level+1); 
} 

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, return 0, else 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int depth = binary_tree_depth(tree);

    if(tree == NULL)      
        return 0;    
    return isPerfectRec(tree, depth, 0);
}