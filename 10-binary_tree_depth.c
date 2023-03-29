#include "binary_trees.h"
/**
  * binary_tree_depth - measure the depth of the tree
  * @tree: A pointer to the node to measure
  *Return: 0 if tree is NULL otherwise 1
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
		return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
