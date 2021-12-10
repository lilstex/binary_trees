#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, the function must return 0, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;

    if(tree == NULL)      
        return 0;    
    if(tree->left != NULL || tree->right != NULL)     
        node_count += 1;   
        node_count += binary_tree_nodes(tree->left);
        node_count += biary_tree_nodes(tree->right);

	return (node_count);
}