#include "binary_trees.h"
/**
  * binary_tree_leaves- countes the leaves in a binary tree
  * @tree: pointer to the root of the tree
  * Return: number of leaves
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);
	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (1);
	else
		return (0);

	return (l + r);
}
