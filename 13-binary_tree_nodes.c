#include "binary_trees.h"
/**
  * binary_tree_nodes- counts the nodes with at least 1 child
  *			in binary tree.
  * @tree: pointer to root node.
  * Return: Number of node with 1 child.
  */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child = 0;

	if (tree == NULL)
		return (0);
	if (tree)
	{
		child += (tree->left || tree->right) ? 1 : 0;
		child += binary_tree_nodes(tree->left);
		child += binary_tree_nodes(tree->right);
	}
	return (child);
}

