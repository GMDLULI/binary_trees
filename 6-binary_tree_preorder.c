#include "binary_trees.h"
/**
  *binary_tree_preorder - goes through binary tree using 
  *			pre-order traversal
  *@tree: pointer to tree
  *@func: pointer to function to call for each node to traverse
  */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return (0);
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
